#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    ptr = (unsigned char *)b;
    i = 0;
    while(i < len)
    {
        ptr[i] = ((unsigned char)c);
        i++;
    }
    return (b);
}

#include <stdio.h>

int main() {
    char buffer[10];
    ft_memset(buffer, 'X', 10);

    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);  
    }

    return 0;
}