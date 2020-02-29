#include <stdio.h>

// Linked list
typedef struct person_t
{
    char name[32];
    unsigned char age;
    struct person_t *next;
} person_t;

typedef void (*p_t)(int);

void print_to_n(int n)
{
    printf("\n===\n");
    for (int i = 1; i <= n; ++i)
        printf("%d\n", i);
}

void foo(p_t printer, int y)
{
    //code
    printer(y);
    //code
}

void main(void)
{
    p_t p = &print_to_n;
    p(5);
    (*p)(5);
    foo(p, 3);
}
