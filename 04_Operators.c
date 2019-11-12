#include <stdio.h>
#include <stdalign.h>

int myFunction(int x, int y)
{
return x * 2 + y;
}

int main (void) {

    /* Relational Operators */
    int x = 5, y = 5;
    int *xptr = &x, *yptr = &y;
    xptr == yptr; /* evaluates to 0, the operands hold different location addresses. */
    *xptr == *yptr; /* evaluates to 1, the operands point at locations that hold the same value. */
    xptr != yptr; /* evaluates to 1, the operands hold different location addresses. */
    *xptr != *yptr; /* evaluates to 0, the operands point at locations that hold the same value. */

    /* Conditional Operator */
    5 > 4; /* evaluates to 1. */
    4 > 4; /* evaluates to 0. */
    5 >= 4; /* evaluates to 1. */
    4 >= 4; /* evaluates to 1. */

    /* Ternary Operator */
    int z = 5, w = 42;
    printf("%i, %i\n", 1 ? z : w, 0 ? z : w); /* Outputs "5, 42" */

    /* Bitwise Operators */
    unsigned int a = 29; /* 29 = 0001 1101 */
    unsigned int b = 48; /* 48 = 0011 0000 */
    int c = 0;
    c = a & b; /* 32 = 0001 0000 */
    printf("%d & %d = %d\n", a, b, c );
    c = a | b; /* 61 = 0011 1101 */
    printf("%d | %d = %d\n", a, b, c );
    c = ~a; /* -30 = 1110 0010 */
    printf("~%d = %d\n", a, c );
    c = a << 2; /* 116 = 0111 0100 */
    printf("%d << 2 = %d\n", a, c );
    c = a >> 2; /* 7 = 0000 0111 */
    printf("%d >> 2 = %d\n", a, c );

    /* Logical Operators */
    2 && 0; /* Returns 0. */
    2 || 0; /* Returns 1. */
    !5; /* Returns 0. */
    !0; /* Returns 1. */
    int d = 20, e = -5;
    /* 'e == -5' is not evaluated, since d 'd != 20' is false. */
    if (d != 20 && e == -5) {
        printf("I won't be printed!\n");
    }

    /* Arithmetic Operators */
    int s = 10, t = 7;
    double u = s - t; /* c now holds the value 3 */
    u = s * t; /* c now holds the value 70 */
    u = s / t; /* c now holds the value 1.42 */
    u = s % t; /* c now holds the value 3 */
    s++; /* incremented by 1 after being used */
    --t; /* decremented by 1 before being used */

    /* Access Operators */
    struct MyStruct{
        int x;
        int y;
    }myObject;
    struct MyStruct *p = &myObject;
    p->x = 42;
    p->y = 123;
    printf(".x = %i, .y = %i\n", p->x, p->y); /* Outputs ".x = 42, .y = 123". */
    printf(".x = %i, .y = %i\n", myObject.x, myObject.y); /* Also outputs ".x = 42, .y = 123". */

    int j = 42;
    int *p2 = &j; // Address-of '&', Dereference '*'
    printf("j = %d, *p2 = %d\n", j, *p2); /* Outputs "j = 42, *p2 = 42". */

    /* sizeof Operator */
    printf("%zu\n", sizeof(int)); /* Valid, outputs the size of an int object, which is platformdependent.*/
    printf("%zu\n", sizeof(j));

    /* Cast Operator */
    printf("%f\n", (double)s / t); /* Outputs "0.750000". */

    /* Function Call Operator */
    int (*fn)(int, int) = &myFunction;
    x = 42;
    y = 123;
    printf("(*fn)(%i, %i) = %i\n", x, y, (*fn)(x, y)); /* Outputs "fn(42, 123) = 207". */
    printf("fn(%i, %i) = %i\n", x, y, fn(x, y)); /* Another form: you don't need to dereference explicitly */

    /* Assignment Operators */
    int l = 5; /* Variable x holds the value 5. Returns 5. */
    char m = 'c'; /* Variable y holds the value 99. Returns 99 */
    float o = 1.5; /* variable z holds the value 1.5. Returns 1.5. */
    char* str = "foo"; /* Variable s holds the address of the first character of the string 'foo'.*/

    a += b; /* equal to: a = a + b */
    a &= b; /* equal to: a = a & b */
    a <<= b; /* equal to: a = a << b */
    *p2 += 27; /* equal to: *p = *p + 27;*/

    /* Pointer Arithmetic */
    static const size_t N = 5;
    size_t k = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; /* or int *ptr = &arr[0]; */
    for(k = 0; k < N; k++)
    {
        printf("\n\t%d", ptr[k]);
        /* or printf("\n\t%d", *(ptr + k)); */
        /* or printf("\n\t%d", *ptr++); */
    }

    /* _Alignof */
    printf("Alignment of char = %zu\n", alignof(char));
    printf("alignof(struct{char c; int n;}) = %zu\n",
    alignof(struct {char c; int n;}));

    return 0;
}
