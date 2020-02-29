/* file1.c */
int foo2 = 2; /* Has external linkage since it is declared at file scope. */
/* file2.c */
#include <stdio.h>
#include <threads.h>
#define SIZE 5

int thread_func(void *id)
{
    /* thread local variable i. */
    static _Thread_local int i;
    /* Prints the ID passed from main() and the address of the i.
    * Running this program will print different addresses for i, showing
    * that they are all distinct objects. */
    printf("From thread:[%d], Address of i (thread local): %p\n", *(int *)id, (void *)&i);
    return 0;
}

int foo(void)
{
    /* An integer with automatic storage duration. */
    auto int i = 3;
    /* Same */
    int j = 5;

    {
        register int k, sum;
        /*Register - is an object that can never alias because no code can pass its address to another function
        where it might be changed unexpectedly.
        The register storage class is more appropriate for variables that are defined inside a block
        and are accessed with high frequency*/
        for (k = 1, sum = 0; k < 6; sum += k, k++)
            ;
        printf("\t%d\n", sum);
    }
    return 0;
} /* The values of i and j are no longer able to be used. */

int main(void)
{
    static int i = 0;
    /* `extern` keyword refers to external definition of `foo`. */
    extern int foo2;
    printf("%d\n", foo);

    thrd_t id[SIZE];
    int arr[SIZE] = {1, 2, 3, 4, 5};
    /* create 5 threads. */
    for (int i = 0; i < SIZE; i++)
    {
        thrd_create(&id[i], thread_func, &arr[i]);
    }
    /* wait for threads to complete. */
    for (int i = 0; i < SIZE; i++)
    {
        thrd_join(id[i], NULL);
    }
    return 0;
}
