/*
Version Standard Publication Date
K&R n/a 1978-02-22
C89 ANSI X3.159-1989 1989-12-14
C90 ISO/IEC 9899:1990 1990-12-20
C95 ISO/IEC 9899/AMD1:1995 1995-03-30
C99 ISO/IEC 9899:1999 1999-12-16
C11 ISO/IEC 9899:2011 2011-12-15

Compiling and running the program
To run the program, this source file (hello.c) first needs to be compiled into an executable file (e.g. hello on
Unix/Linux system or hello.exe on Windows). This is done using a compiler for the C language.

Compile using GCC
gcc hello.c -o hello
gcc -Wall -Wextra -Werror -o hello hello.c
*/
#include <stdio.h>

int main (void) {
    printf("hello, world\n");
    puts("Hello, World");
    return 0;
}
