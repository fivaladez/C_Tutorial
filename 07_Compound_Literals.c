#include <stdio.h>

struct point {
    unsigned x;
    unsigned y;
};

void f1( struct point );

int main(void)
{
    int *p = (int [2]){ 2, 4 };
    // initialized to the address of the first element of an unnamed array of two ints.
    f1( (struct point){.x=1, .y=1} );

    return 0;
}

void f1( struct point c){
    printf("x=%d, y=%d", c.x, c.y);
}
