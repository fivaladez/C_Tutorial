#include <stdio.h>
/* Uncomment to disable `assert()` */
/* #define NDEBUG */
#include <assert.h>

int main(void)
{
    int x = -1;
    // Simple assertion - to fail in execution
    assert(x >= 0);
    printf("x = %d\n", x);

    enum {N = 6};
    // Static assert - to fail when compiling
    _Static_assert(N == 5, "N does not equal 5");
    return 0;

    int *p = NULL;
    f(p);
}

void f(void *p)
{
    assert(p != NULL && "function f: p cannot be NULL");
    /* more code */
}
