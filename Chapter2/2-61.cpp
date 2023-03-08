#include<stdio.h>



int main(){
    int x = 0xFFFFFFFF;
    int shiftBitNumber = (sizeof(int) - 1) << 3;
    int leastSignificantByte = 0xFF ^ (0xFF & x);
    int mostSignificantByte = (0xFF & (x >> shiftBitNumber));

    int satisfyConditions = !((0xFF ^ (0xFF & x)) && (0xFF & (x >> shiftBitNumber)));
    printf("satisfyConditions: %d\n", satisfyConditions);

    return 0;
}