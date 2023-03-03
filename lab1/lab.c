#include <stdio.h>

// Display the minimum of three float numbers, read with scanf

float min(float x, float y){
    if (x < y)
        return x;
    return y;
}

float minThree(float x, float y, float z){
    return min(min(x,y),z);
}

int main() {
    printf("the min of 3, 4, 10 %.2f \n", minThree(3,4,10));
    return 0;
}
