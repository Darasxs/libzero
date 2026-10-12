#include "libdara.h"

int ld_isalnum(int c)
{
    if (ld_isalpha(c) || ld_isdigit(c))
        return (1);
    
    return (0);
}