#include <stdio.h>

int main(void)
{
    int array[3];                  // array of 10 int
    for (size_t i = 0; i < 3; i++) // i starts at 0 and finishes with 9
    {
        scanf("%d", &array[i]);
    }

    int num = 1;
    while (num != 0)
    {
        scanf("%d", &num);
    }

    int sum;
    num = sum = 0;
    do
    {
        scanf("%d", &num);
        sum += num;
    } while (sum < 50);

    /*Infinite loops
    while (true){}
    for (;;){}
    */
}
