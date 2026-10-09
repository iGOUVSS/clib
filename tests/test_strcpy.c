#include "clib.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *src = "Hello World!";

    char *dest = malloc(clib_strlen(src) + 1);

    if (dest == NULL)
    {
        return 1;
    }

    clib_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    free(dest);

    return 0;
}