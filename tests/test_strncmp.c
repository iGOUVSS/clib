#include "clib.h"

#include <stdio.h>

int main(void)
{
    const char *s1 = "ABCD";
    const char *s2 = "ABCE";
    size_t n = 3;

    int result = clib_strncmp(s1, s2, n);

    if (result < 0)
    {
        printf("%s is smaller than %s\n", s1, s2);
    }
    else if (result > 0)
    {
        printf("%s is greater than %s\n", s1, s2);
    }
    else
    {
        printf("The first %zu characters are equal.\n", n);
    }

    return 0;
}