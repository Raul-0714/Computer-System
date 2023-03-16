#include<stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum){
    unsigned byteWanted = (word >> (bytenum << 3)) & 0xFF;
    int leftShiftSteps = (sizeof(int) - 1) << 3;
    int byteSignExpanded = (byteWanted << leftShiftSteps) >> leftShiftSteps;
    return byteSignExpanded;
}

int main(){
    
    return 0;
}