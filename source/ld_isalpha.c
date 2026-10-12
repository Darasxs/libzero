#include "libdara.h"

int ld_isalpha(int c)
{
    if (ld_isupper(c) || ld_islower(c))
        return (1);
    
    return (0);
}