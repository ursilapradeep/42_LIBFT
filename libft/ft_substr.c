#include <string.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

char *ft_substr(char const *s, unsigned int start,
    size_t len)
{
    char *ptr;
    size_t s_len = ft_strlen(s);

    if (start >= s_len)
    {
        ptr = malloc(1);
        if (!ptr)
            return (NULL);
        ptr[0] = '\0';
        return ptr; 
    }

    if (start + len > s_len )
    {
        len = s_len - start;
    }
    
    ptr = (char *)malloc (len + 1);
    int i = 0;
    while (s[i+start] && i < len)
    {
    
        ptr[i] = s[i+start];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

#include <stdio.h>
int main()
{
    char s[] = "hello world";
    unsigned int start = 8;
    char *ptr;
    
    ptr = ft_substr(s, start, 5); 
    printf("%s\n", ptr);
    return 0;
}