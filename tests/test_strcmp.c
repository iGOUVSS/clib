#include "clib.h"

#include <stdio.h>

int main(void)
{
    const char *s1 = "hello";
    const char *s2 = "hello!";

    int result = clib_strcmp(s1, s2);

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
        printf("%s is equal to %s\n", s1, s2);
    }

    return 0;
}