#include "clib.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "";
    const char *s2 = "a";
    const char *s3 = "hello";
    const char *s4 = "hello world";

    printf("\"%s\" length: %zu\n", s1, clib_strlen(s1));
    printf("\"%s\" length: %zu\n", s2, clib_strlen(s2));
    printf("\"%s\" length: %zu\n", s3, clib_strlen(s3));
    printf("\"%s\" length: %zu\n", s4, clib_strlen(s4));

    return 0;
}