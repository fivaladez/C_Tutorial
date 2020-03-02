#include <stdio.h>

void fun(int *ptr)
{
    int a = 10;
    ptr = &a;
    printf("%d", *ptr);
}

int main()
{
    int b = 20;
    int *ptr = &b;
    fun(ptr);
    printf("%d", *ptr);

    char *pc = "Linux";
    printf("%c", *pc++);
    printf("%c", *pc);

    int c = 10;
    int d = 20;
    int(*p)[c][d];
    printf("%d", sizeof(*p));

    return 0;
}