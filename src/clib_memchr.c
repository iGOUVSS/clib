#include "clib.h"

void *clib_memchr(const void *s, int c, size_t n)
{
    typedef unsigned char BYTE;

    const BYTE *bytes = (const BYTE *)s;

    for (size_t i = 0; i < n; i++)
    {
        if (bytes[i] == (BYTE)c)
        {
            return (void *)&bytes[i];
        }
    }

    return NULL;
}