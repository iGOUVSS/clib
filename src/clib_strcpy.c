#include "clib.h"

char *clib_strcpy(char *dest, const char *src)
{
    size_t len = clib_strlen(src);

     for (size_t i = 0; i <= len; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}