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

int is_in_set(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    
    }
    return (0);   
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end;  

    char *trimm;
    size_t i;

    i = 0;

    if (!s1 || !set)
    {
        return (NULL);
    }

    end = ft_strlen(s1);

    if (end == 0)
        return strdup(" ");
    
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    
    while (end > start && is_in_set(s1[end -1], set))
        end--;
    
    trimm = (char *)malloc (end - start + 1);
    if(!trimm)
        return (NULL);
    
    while (start < end)
        trimm[i++] = s1[start++];
    trimm[i] = '\0';

    return (trimm);
}

#include <stdio.h>
int main()
{
    const char *s1 = "   Hello world   ";
    const char *set = "   ";
    char *trim;

    trim = ft_strtrim(s1, set);
    printf("Trimmed: \"%s\"\n", trim);
    if (!trim)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    free(trim);
    return (0);
}