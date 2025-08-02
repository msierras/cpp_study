// ---------- Second File ----------

static int sum = 0, count = 0;


// Do NOT define a second main function here!


int running_avg(int i){
    sum = sum + i;
    count++;
    return sum/count;
}

void reset(){
    sum = 0;
    count = 0;
}