#include <stdio.h>
/*
Operator Relative Precedence Associativity
[] (array subscription) 1 Left-to-right
() (function call) 1 Left-to-right
* (dereference) 2 Right-to-left
*/
char *names[20];      // array of size 20 of a pointer to char
char (*place)[10];    // pointer to an array of size 10 of char.
int fn(long, short);  // function taking long, short and returning int
int *fn2(void);        // function taking void and returning a pointer to int
int (*fp)(void);      // pointer to a function taking void and returning int.
int **ptr;            // pointer to a pointer to an int


int main (void) {

    signed char c = 127; /* required to be 1 byte, see remarks for further information. */
    signed short int si = 32767; /* required to be at least 16 bits. */
    signed int i = 32767; /* required to be at least 16 bits */
    signed long int li = 2147483647; /* required to be at least 32 bits. */

    /* the following variables are initialized to the same value: */
    int d = 42;   /* decimal constant (base10) */
    int o = 052;  /* octal constant (base8) */
    int x = 0xaf; /* hexadecimal constants (base16) */
    int X = 0XAf; /* (letters 'a' through 'f' (case insensitive) represent 10 through 15) */

    /* suffixes to describe width and signedness : */
    long int i2 = 0x32; /* no suffix represent int, or long int */
    unsigned int ui = 65535u; /* u or U represent unsigned int, or long int */
    long int li2 = 65536l; /* l or L represent long int */

    float f = 0.314f; /* suffix f or F denotes type float */
    double d2 = 0.314; /* no suffix denotes double */
    long double ld = 0.314l; /* suffix l or L denotes long double */
    /* they can also defined in scientific notation */
    double sd = 1.2e3; /* decimal fraction 1.2 is scaled by 10^3, that is 1200.0 */

    /* String literals are not modifiable */
    char* str = "hello, world"; /* string literal */
    char* str2[1] = {"hello, world"}; /* string literal */
    char* str3[2] = {"hello", "world"}; /* string literal */

    printf("%s\n", str);
    printf("%s\n", str2[0]);
    printf("%s\n", str3[0]);

    return 0;
}
