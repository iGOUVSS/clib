#include "clib.h"

void *clib_memset(void *s, int c, size_t n)
{
    typedef unsigned char BYTE;

    BYTE *bytes = (BYTE *)s;
    size_t i = 0;

    while (i < n)
    {
        bytes[i] = (BYTE)c;
        i++;
    }

    return s;
}