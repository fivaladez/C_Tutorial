#include <stdio.h>

void test(int bar) // bar has scope test function block
{
    int foo = 5; // foo has scope test function block
    {
        int bar = 10; // bar has scope inner block, this overlaps with previous test:bar declaration, and it hides test:bar
        printf("%d %d\n", foo, bar); // 5 10
    } // end of scope for inner bar
    printf("%d %d\n", foo, bar); // 5 5, here bar is test:bar
} // end of scope for test:foo and test:bar

int main(void)
{
    int foo = 3; // foo has scope main function block
    printf("%d\n", foo); // 3
    test(5);
    printf("%d\n", foo); // 3
    return 0;
} // end of scope for main:fo
