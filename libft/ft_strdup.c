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

char *ft_strdup(const char *s1)
{
    char *ptr;
    size_t number_of_bytes;

    int i;

    i = 0;

    number_of_bytes = ft_strlen(s1); 
    ptr = (char *)malloc( number_of_bytes + 1);

    if (!ptr)
    {
        return NULL;
    }
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
return ptr;
}

#include <stdio.h>
int main()
{
    char s1[] = "hello";
    char *ptr;
    
    ptr = ft_strdup(s1);
    printf("%s\n", ptr);
    return 0;
}