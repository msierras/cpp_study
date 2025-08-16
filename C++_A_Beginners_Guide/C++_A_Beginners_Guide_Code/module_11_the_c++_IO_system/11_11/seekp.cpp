// Demonstrate random access in a file.

/*
 This program replaces a specific byte in a file with the character 'X'.
 Usage: ./seekp <filename> <byte_position>

 Example: ./seekp data.txt 5
 → This will overwrite the 6th byte in "data.txt" with 'X' (byte positions start at 0).
 */ 

#include <iostream>
#include <fstream>   // For file streams
#include <cstdlib>   // For atoi (converts C-string to int)
using namespace std;

int main(int argc, char *argv[]) {
    // Check if user provided exactly 2 arguments:
    // argv[1] = filename, argv[2] = byte position
    if (argc != 3) {
        cout << "Usage: seekp <filename> <byte>\n";
        return 1; // Exit with error code
    }

    // Open file for both input (ios::in) and output (ios::out), in binary mode.
    // This allows us to both read and write without truncating (erasing) the file.
    fstream out(argv[1], ios::in | ios::out | ios::binary);
    
    // Check if the file opened successfully
    if (!out) {
        cout << "Cannot open file.\n";
        return 1; // Exit with error code
    }

    // Convert the byte position argument (argv[2]) from string to int
    int position = atoi(argv[2]);

    // Move the "put" pointer (write position) to the requested byte
    // ios::beg means "count from the beginning of the file"
    out.seekp(position, ios::beg);

    // Write the character 'X' at that byte location
    out.put('X');

    // Close the file
    out.close();

    return 0; // Success
}
