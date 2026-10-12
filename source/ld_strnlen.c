#include "libdara.h"
#include <stddef.h>

size_t ld_strnlen(const char *s, size_t maxlen)
{
    size_t i = 0;

    while(i < maxlen && s[i] != '\0')
        i++;

    return (i);
}