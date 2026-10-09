#ifndef CLIB_H
#define CLIB_H

#include <stddef.h>

size_t clib_strlen(const char *s);
char *clib_strcpy(char *dest, const char *src);
int clib_strcmp(const char *s1, const char *s2);
void *clib_memset(void *s, int c, size_t n);
int clib_strncmp(const char *s1, const char *s2, size_t n);
void *clib_memchr(const void *s, int c, size_t n);

#endif
