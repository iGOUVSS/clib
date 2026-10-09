#include "clib.h"

#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";

    printf("Before: %s\n", str);

    clib_memset(str, 'X', 5);

    printf("After:  %s\n", str);

    return 0;
}