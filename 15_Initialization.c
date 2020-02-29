#include <stdio.h>

int main(int argc, char *argv[])
{
    /*Variables*/
    int x = 1;
    char squota = '\'';
    long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */

    /*Array*/
    int days_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /*Character Arrays*/
    char chr_array[] = "hello";
    char chr_array2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    /*  Designated initializers */
    /* array */
    int array[] = {[4] = 29, [5] = 31, [17] = 101, [18] = 103, [19] = 107, [20] = 109};

    /*  structures */
    struct Date
    {
        int year;
        int month;
        int day;
    };
    struct Date us_independence_day = {.day = 4, .month = 7, .year = 1776};
    struct Date mx_independence_day = {21, 11, 1821};

    /* unions*/
    struct discriminated_union
    {
        enum
        {
            DU_INT,
            DU_DOUBLE
        } discriminant;
        union {
            int du_int;
            double du_double;
        } du;
    };
    struct discriminated_union du1 = {.discriminant = DU_INT, .du = {.du_int = 1}};
    struct discriminated_union du2 = {DU_DOUBLE, {.du_double = 3.14159}};

    /*arrays of structures*/
    typedef struct Date Date; // See earlier in this example
    struct date_range
    {
        Date dr_from;
        Date dr_to;
        char dr_what[80];
    };
    struct date_range ranges[] =
        {
            [3] = {
                .dr_from = {.year = 1066, .month = 10, .day = 14},
                .dr_to = {.year = 1066, .month = 12, .day = 25},
                .dr_what = "Battle of Hastings to Coronation of William the Conqueror",
            },
            [2] = {
                .dr_from = {.month = 7, .day = 4, .year = 1776},
                .dr_to = {.month = 5, .day = 14, .year = 1787},
                .dr_what = "US Declaration of Independence to Constitutional Convention",
            }};

    return 0;
}
