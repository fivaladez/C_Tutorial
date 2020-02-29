#include <stdio.h>
#include <stdlib.h>

/*
Memory dynamically allocated using malloc() may be resized using realloc() or,
when no longer needed, released using free()
*/
int main(void)
{
    int *p = calloc(10, sizeof *p); // malloc + memset = Assign memory and initialize with 0

    /* Allocates 1024 bytes with 256 bytes alignment. */
    // int *p = aligned_alloc(256, 1024);
    if (p == NULL)
    {
        perror("calloc() failed");
        return EXIT_FAILURE;
    }
    printf("%d", *p);
    free(p); // Not equal to realloc(ptr, 0)
    printf("%d", *p);
    return EXIT_SUCCESS;
}
