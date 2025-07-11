#include "libft.h"

size_t ft_str_len(const char *s)
{
    int len;

    len = 0;
    while (s[len])
    {
        len++;
    }
    return len;
}
