#include <stdlib.h>
#include <string.h>


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

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    int s1_len;
    int s2_len;
    int i;
    int j;

    i = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    ptr = (char *)malloc(sizeof(s1_len + s2_len));
    
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;   
    }
    j = 0;
    while (s2[j])
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    return (ptr);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc < 3)
    {
        return (0);
    }
    char* s1 = argv[1];
    char* s2 = argv[2];
    char *result;

    result = ft_strjoin(s1, s2);
    printf("%s\n", result);
    free(result);
    return 0;
}
