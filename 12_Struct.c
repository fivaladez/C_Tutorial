#include <stdio.h>
#include <stdlib.h>

struct ex3
{
    int foo;
    char bar;
    int flex[];
};

typedef struct
{
    int x, y;
} Point;

struct coordinates
{
    int x;
    int y;
    int z;
};

struct coordinates move(struct coordinates position, struct coordinates movement)
{
    position.x += movement.x;
    position.y += movement.y;
    position.z += movement.z;
    return position;
}

int main(void)
{
    /* Prints "5,8" on my machine, so there are 3 bytes of padding. */
    printf("%zu,%zu\n", sizeof(int) + sizeof(char), sizeof(struct ex3));
    /* valid: initialize foo=1, bar=2 members */
    struct ex3 e3 = {1, 2};
    /* valid: allocate 5 structure type ex3 objects along with an array of 3 ints per object */
    struct ex3 *pe3 = malloc(5 * (sizeof(*pe3) + sizeof(int[3])));
    pe3[0].flex[0] = 5; /* valid */
}
