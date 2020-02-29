#include <stdio.h>

#if 0 //Commenting using preprocessor
/*delimited comments*/
// delimited comments
int x = 2;
#else
int x = 3;
#endif

int main(void)
{
    printf("%d", x);
    return 0;
}
