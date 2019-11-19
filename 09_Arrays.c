// Derived data types, representing an ordered collection of values ("elements") of another type
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[10] = {0};/*array of 10 ints initialized with 0*/
    int array2[] = {1, 2, 3}; /* an array of 3 int's */
    int array3[] = {[3] = 8, [0] = 9}; /* size is 4 */

    /* size of `array` in bytes */
    size_t size = sizeof(array2);
    /* number of elements in `array` */
    size_t length = sizeof(array2) / sizeof(array2[0]);

    int a[3][4] = {
        {0, 1, 2, 3} , /* initializers for row indexed by 0 */
        {4, 5, 6, 7} , /* initializers for row indexed by 1 */
        {8, 9, 10, 11} /* initializers for row indexed by 2 */
    };
    /* an array with 5 rows and 2 columns*/
    int b[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};

    int val;
    /* Setting the value of the fifth element to 5: */
    array[4] = 5;
    /* The above is equal to: */
    *(array + 4) = 5;
    /* Reading the value of the fifth element: */
    val = array[4];

    int * pdata;
    size_t n;
    printf ("Enter the size of the array: ");
    fflush(stdout); /* Make sure the prompt gets printed to buffered stdout. */
    if (1 != scanf("%zu", &n)) /* If zu is not supported (Windows?) use lu. */
    {
        fprintf("scanf() did not read a in proper value.\n");
        exit(EXIT_FAILURE);
    }
    pdata = calloc(n, sizeof(int));// Assigne memory and initialize it with zeros
    if (NULL == pdata)
    {
        perror("calloc() failed"); /* Print error. */
        exit(EXIT_FAILURE);
    }
    free(pdata); /* Clean up. */
    return EXIT_SUCCESS;

}
