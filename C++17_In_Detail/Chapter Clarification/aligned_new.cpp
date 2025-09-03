// aligned_new.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <cassert>
#include <iostream>
#include <memory>
#include <new>  // required for allocation-related types and declarations (e.g. std::align_val_t)
#include <vector>

#if defined(_WIN32) || defined(__CYGWIN__)
#    include <malloc.h> // for _aligned_malloc / _aligned_free on Windows

    // Platform adapter: allocate aligned memory (Windows)
    void* custom_aligned_alloc(size_t size, size_t alignment) {
        // _aligned_malloc ensures the returned pointer meets 'alignment' requirements.
        return _aligned_malloc(size, alignment);
    }
    void custom_aligned_free(void* ptr) {
        _aligned_free(ptr);
    }
#else
#    include <cstdint>   // included in sample; aligned_alloc is in <cstdlib> on many systems
#    include <cstdlib>   // for std::aligned_alloc and std::free (safer to include)

    // Platform adapter: allocate aligned memory (POSIX / C11)
    // NOTE: std::aligned_alloc(alignment, size) requires that size is a multiple of alignment.
    void* custom_aligned_alloc(size_t size, size_t alignment) {
        return std::aligned_alloc(alignment, size);
    }
    void custom_aligned_free(void* ptr) {
        std::free(ptr);
    }
#endif

// ---------------------------
// Overloaded global aligned operator new (C++17)
// This is called when 'new' requests a non-default alignment (std::align_val_t).
// ---------------------------
void* operator new(std::size_t size, std::align_val_t align) {
    // call the platform-specific aligned allocator
    auto ptr = custom_aligned_alloc(size, static_cast<std::size_t>(align));

    // If allocation failed, follow the standard behavior: throw bad_alloc
    if (!ptr)
        throw std::bad_alloc{};

    // Diagnostic output so you can see when aligned allocations occur
    std::cout << "new: " << size << ", align: " << static_cast<std::size_t>(align)
              << ", ptr: " << ptr << '\n';

    return ptr;
}

// ---------------------------
// Aligned deallocation overloads
// These are the matching operator delete overloads for aligned allocations.
// There are two forms provided: sized delete (with size) and unsized (without size).
// ---------------------------
void operator delete(void* ptr, std::size_t size, std::align_val_t align) noexcept {
    std::cout << "delete: " << size << ", align: " << static_cast<std::size_t>(align)
              << ", ptr : " << ptr << '\n';
    custom_aligned_free(ptr);
}

void operator delete(void* ptr, std::align_val_t align) noexcept {
    std::cout << "delete: align: " << static_cast<std::size_t>(align)
              << ", ptr : " << ptr << '\n';
    custom_aligned_free(ptr);
}

// ---------------------------
// Example over-aligned type: ensure 32-byte alignment (useful for SIMD/AVX)
// ---------------------------
struct alignas(32) Vec3dAVX {
    double x, y, z;
};

int main() {
    // Print the implementation's default alignment for operator new
    std::cout << "__STDCPP_DEFAULT_NEW_ALIGNMENT__ is " << __STDCPP_DEFAULT_NEW_ALIGNMENT__ << std::endl;

    std::cout << "sizeof(Vec3dAVX) is " << sizeof(Vec3dAVX) << '\n';
    std::cout << "alignof(Vec3dAVX) is " << alignof(Vec3dAVX) << '\n';

    // ---------- scalar array allocation of over-aligned type ----------
    {
        std::cout << "---- new Vec3dAVX[10]\n";
        // This allocation should route through the aligned operator new (C++17)
        auto pVec = new Vec3dAVX[10];

        // Ensure the returned pointer meets alignment requirement
        assert(reinterpret_cast<uintptr_t>(pVec) % alignof(Vec3dAVX) == 0);

        // Deallocate; matching delete[] will be invoked and custom free used
        delete[] pVec;
    }

    // ---------- normal allocation (no special alignment) ----------
    {
        std::cout << "---- new int[10]\n";
        auto p2 = new int[10];
        delete[] p2;
    }

    // ---------- std::vector of over-aligned type ----------
    {
        std::cout << "---- vector<Vec3dAVX>\n";
        std::vector<Vec3dAVX> vec;
        vec.push_back({}); // vector allocates storage for elements; should get aligned storage
        vec.push_back({});
        vec.push_back({});
        // Check underlying storage alignment
        assert(reinterpret_cast<uintptr_t>(vec.data()) % alignof(Vec3dAVX) == 0);
    }

    // ---------- std::make_unique for arrays ----------
    {
        std::cout << "---- unique_ptr<Vec3dAVX[]>\n";
        auto pUnique = std::make_unique<Vec3dAVX[]>(10);
        // pUnique will be freed automatically when it goes out of scope
    }
}