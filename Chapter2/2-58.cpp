/* $begin is little_endian */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *byte_pointer;

int is_little_endian() {
    int x = 0x0100;
    int is_little_endian = 1;
    byte_pointer start = (byte_pointer) &x;
    if (start[0] == 0x00){
        is_little_endian = 0;
    }
    return is_little_endian;
}

int main(int argc, char *argv[]) {
    if (is_little_endian()){
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    return 0;
}