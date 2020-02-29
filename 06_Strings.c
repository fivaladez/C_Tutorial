/*
In C, a string is not an intrinsic type. A C-string is the convention to have a one-dimensional
array of characters which is terminated by a null-character, by a '\0'.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    // 6.1: Tokenisation: strtok(), strtok_r() and strtok_s()
    int toknum = 0;
    char src[] = "1 2 3 4";
    const char delimiters[] = " ";
    char *token = strtok(src, delimiters);
    while (token != NULL)
    {
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimiters);
    }

    // Section 6.2: String literals
    char *foo = "hello"; // foo[0] = 'y'; //Undefined behavior - BAD!
    char foo2[] = "hello";
    printf("%s\n", foo2);
    foo2[0] = 'y'; /* OK! */
    printf("%s\n", foo2);

    // Section 6.3: Calculate the Length: strlen()
    size_t len = strlen(foo);
    printf("The length in Bytes of foo is %zu.\n", len);

    // Section 6.5: Copying strings
    char src2[] = "abc";
    char dst[8];
    strcpy(dst, src2);
    printf("%s\n", dst); /* "abc" will be printed */
    strncat(dst, src2, sizeof(dst) - 1);
    printf("%s\n", dst); /* "abcabc" will be printed */

    // Section 6.6: Iterating Over the Characters in a String
    char *string = "hello world"; /* This 11 chars long, excluding the 0-terminator. */
    size_t i = 0;
    while (string[i] != '\0')
    {                              /* Stop looping when we reach the null-character. */
        printf("%c\n", string[i]); /* Print each character of the string. */
        i++;
    }

    // Section 6.7: Creating Arrays of Strings
    char *string_array[] = {
        "foo",
        "bar",
        "baz"};
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", string_array[i]);
    }

    // Section 6.8: Convert Strings to Number: atoi(), atof() (dangerous, don't use them)
    char *num = "25";
    printf("%d\n", atoi(num));

    // Section 6.10: Find first/last occurrence of a specific character: strchr(), strrchr()
    char toSearchFor = 'o';
    char *occurrence = "cordero";
    char *firstOcc = strchr(occurrence, toSearchFor);
    char *lastOcc = strrchr(occurrence, toSearchFor);
    printf("First occurrence of 'o': %s. Last occurrenceof 'o': %s", firstOcc, lastOcc);

    // Section 6.11: Copy and Concatenation: strcpy(), strcat()
    char mystring[10];
    strcpy(mystring, "foo"); //  Copy "foo" into `mystring`, until a NUL character is encountered.
    printf("%s\n", mystring);
    strcat(mystring, "bar"); // Append "bar" to `mystring`.
    printf("%s\n", mystring);
    strcpy(mystring, "bar"); //  Copy "bar" into `mystring`, overwriting the former contents.
    printf("%s\n", mystring);

    // Section 6.12: Comparsion: strcmp(), strncmp(), strcasecmp(), strncasecmp()
    int result = strcmp("AA", "BB"); // compute comparison once
    if (result < 0)
    {
        printf("AA comes before BB\n");
    }
    else if (result == 0)
    {
        printf("AA equals BB\n");
    }
    else
    { // last case: result > 0
        printf("AA comes after BB\n");
    }
}
