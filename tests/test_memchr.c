#include "clib.h"

#include <stdio.h>

int main(void)
{
    char myStr[] = "Hello World!";

    char *ptr = (char *)clib_memchr(myStr, 'o', 12);

    if (ptr == NULL)
    {
        printf("Not found!\n");
        return 0;
    }

    printf("Found: %c!\n", *ptr);

    return 0;
}