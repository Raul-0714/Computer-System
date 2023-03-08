#include<stdio.h>

typedef unsigned char *byte_pointer;

int is_little_endian() {
    int x = 0x0100;
    int isLittleEndian = 0;
    byte_pointer start = (byte_pointer) &x;
    if (start[0] == 0x00){
        isLittleEndian = 1;
    }
    return isLittleEndian;
}

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    int wordLength = sizeof(unsigned);
    int end = wordLength - 1;
    byte_pointer start = (byte_pointer) &x;

    if(is_little_endian()){
        start[i] = b;
    } else {
        start[end - i] = b;
    }

    return x;
}

int main() {

    unsigned xAfterReplace = replace_byte(0xabcdef01, 0, 0x55);

    printf("xAfterReplace: %x\n", xAfterReplace);

    return 0;
}