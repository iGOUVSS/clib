CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

test_strlen:
	$(CC) $(CFLAGS) src/clib_strlen.c tests/test_strlen.c -o test_strlen

test_strcpy:
	$(CC) $(CFLAGS) src/clib_strlen.c src/clib_strcpy.c tests/test_strcpy.c -o test_strcpy

test_strcmp:
	$(CC) $(CFLAGS) src/clib_strcmp.c tests/test_strcmp.c -o test_strcmp

test_memset:
	$(CC) $(CFLAGS) src/clib_memset.c tests/test_memset.c -o test_memset

test_strncmp:
	$(CC) $(CFLAGS) src/clib_strncmp.c tests/test_strncmp.c -o test_strncmp

test_memchr:
	$(CC) $(CFLAGS) src/clib_memchr.c tests/test_memchr.c -o test_memchr

clean:
	rm -f test_strlen test_strcpy test_strcmp test_memset test_strncmp test_memchr