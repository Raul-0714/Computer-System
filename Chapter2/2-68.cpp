#include<stdio.h>
#include<assert.h>

int lower_one_mask(int n){
    int allOne = ~0;
    int nLeastSignificantZero = allOne << (n - 1) << 1;

    return allOne ^ nLeastSignificantZero;
}

int main(){
    assert(lower_one_mask(6) == 0x3F);
    assert(lower_one_mask(17) == 0x1FFFF);
    assert(lower_one_mask(32) == 0xFFFFFFFF);
    assert(lower_one_mask(22) == 0x3FFFFF);
    return 0;
}