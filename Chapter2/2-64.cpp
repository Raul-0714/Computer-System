#include<stdio.h>

int add_odd_one(unsigned x){
    unsigned maskAllEven = 0xAAAAAAAA;
    return 0 || (x & maskAllEven);
}

int main(){
    int test = 0x87654321;
    int result = add_odd_one(test);
    /*Print the result*/
    printf("result: %d\n", result);
    return 0;
}