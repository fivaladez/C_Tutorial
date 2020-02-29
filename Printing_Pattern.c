#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int len = 2 * n - 1;
    int min1, min2, min;

    for (int rows = 1; rows <= len; rows++)
    {
        for (int cols = 1; cols <= len; cols++)
        {
            // min diff btn vertical sides
            min1 = rows <= len - rows ? rows - 1 : len - rows;
            // min diff btn horizontal sides
            min2 = cols <= len - cols ? cols - 1 : len - cols;
            // min diff btn vertical & horizontal sides
            min = min1 <= min2 ? min1 : min2;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
