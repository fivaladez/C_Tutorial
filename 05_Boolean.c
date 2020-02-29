#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = true;  /* equivalent to bool x = 1; */
    bool y = false; /* equivalent to bool y = 0; */
    /*
    You can also use #define:
        #define bool int
        #define true 1
        #define false 0

    Or use _Bool:
        _Bool x = 1;
        _Bool y = 0;
    You can only assign values of 0 and 1

    */
    if (x) /* Functionally equivalent to if (x != 0) or if (x != false) */
    {
        puts("This will print!");
    }
    if (!y) /* Functionally equivalent to if (y == 0) or if (y == false) */
    {
        puts("This will also print!");
    }

    char const *s = "Hello";
    if (s && s[0])
    { // (s != NULL && s[0] != '\0')
        printf("this starts well, %c is alphabetic\n", s[0]);
    }
}
