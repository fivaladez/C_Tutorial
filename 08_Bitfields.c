#include <stdio.h>

struct FPGAInfo
{
    union {
        struct
        {
            unsigned int bulb1On : 1;
            unsigned int bulb2On : 1;
            unsigned int bulb1Off : 1;
            unsigned int bulb2Off : 1;
            unsigned int jetOn : 1;
        } bits;
        unsigned int data;
    };
} fInfo;
/*Aligment*/
struct
{
    short s;      /* 2 bytes */
    char c;       /* 1 byte */
    int bit1 : 1; /* 1 bit */
    int nib : 4;  /* 4 bits padded up to boundary of 8 bits. Thus 3 bits are padded */
    int sept : 7; /* 7 Bits septet, padded up to boundary of 32 bits. */
} C;

int main(void)
{
    fInfo.data = 0xFF34F;
    if (fInfo.bits.bulb1On)
    {
        printf("Bulb 1 is on\n");
    }

    return 0;
}
