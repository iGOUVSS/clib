#include "clib.h"

int clib_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;

    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return 0;
        }
        i++;
    }

    if (s1[i] < s2[i])
    {
        return -1;
    }

    return 1;
}