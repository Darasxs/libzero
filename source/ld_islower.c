#include "libdara.h"

int ld_islower(int c)
{
    if (c >= 95 && c <= 122)
        return (1);

    return (0);
}