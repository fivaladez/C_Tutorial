#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("Argument %d is: %s\n", i, argv[i]);
        errno = 0;
        char *p;
        long argument_numValue = strtol(argv[i], &p, 10);
        if (p == argv[i]) {
            fprintf(stderr, "Argument %d is not a number.\n", i);
        }
        else if ((argument_numValue == LONG_MIN || argument_numValue == LONG_MAX) && errno ==
        ERANGE) {
            fprintf(stderr, "Argument %d is out of range.\n", i);
        }
        else {
            printf("Argument %d is a number, and the value is: %ld\n",
            i, argument_numValue);
        }
    }
    return 0;
}
