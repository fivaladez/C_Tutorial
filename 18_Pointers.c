#include <stdio.h>
#include <stdlib.h>

int my_function(int a, int b)
{
    return 2 * a + 3 * b;
}
int (*my_pointer)(int, int);
my_pointer = &my_function;

typedef void (*Callback)(int a);
void some_function(Callback callback)
{
    int a = 4;
    callback(a);
}

int main(void)
{
    int result = (*my_pointer)(4, 2);

    /*Not checking for allocation failures*/
    struct SomeStruct *s = malloc(sizeof *s);
    s->someValue = 0; /* UNSAFE, because s might be a null pointer */
    if (s)
    {
        s->someValue = 0; /* This is safe, we have checked that s is valid */
    }

    /*Using literal numbers instead of sizeof when requesting memory*/
    int *intPtr = malloc(sizeof(*intPtr) * 1000);    /* allocating storage for 1000 int */
    long *longPtr = malloc(sizeof(*longPtr) * 1000); /* allocating storage for 1000 long */

    int a = 2;
    int *p = &a;

    printf("%d", (*p)++); // Increment value pointed
    printf("%d", *p++);   // increment address and then dereference it

    return 0;
}

/*Creating pointers to stack variables*/
int *solution1(void)
{
    int *x = malloc(sizeof *x);
    if (x == NULL)
    {
        /* Something went wrong */
        return NULL;
    }
    *x = 10;
    return x;
}
