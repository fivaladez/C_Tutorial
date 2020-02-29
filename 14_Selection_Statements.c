#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    printf("\nEnter Three numbers = ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a < b) && (a < c))
        printf("\na = %d is the smallest.", a);
    else if ((b < a) && (b < c))
        printf("\nb = %d is the smallest.", b);
    else if ((c < a) && (c < b))
        printf("\nc = %d is the smallest.", c);
    else
        printf("\nImprove your coding logic");

    a = 1;
    switch (a)
    {
    case 1:
        puts("a is 1");
        break;
    case 2:
        puts("a is 2");
        break;
    default:
        puts("a is neither 1 nor 2");
        break;
    }

    enum msg_type
    {
        ACK,
        PING,
        ERROR
    } t;
    /*Using an enum you can forget about default case*/
    switch (t)
    {
    case ACK:
        // do nothing
        break;
    case PING:
        // do something
        break;
    case ERROR:
        // do something else
        break;
    }

    return 0;
}
