#include <stdio.h>
#include <stdlib.h>


enum color{ RED, GREEN, BLUE };

void printColor(enum color chosenColor)
{
    char *color_name = "Invalid color";
    switch (chosenColor)
    {
        case RED:
        color_name = "RED";
        break;
        case GREEN:
        color_name = "GREEN";
        break;
        case BLUE:
        color_name = "BLUE";
        break;
    }
    printf("%s\n", color_name);
}

int main(void){
    printColor( RED );
}
