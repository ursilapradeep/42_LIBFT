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

int count_tokens(const char *s, const char delimeter)
{
    int i;
    int count_tokens;

    i = 0; 
    count_tokens = 0;

    while (s[i])
    {
        while (s[i] == delimeter)
            i++;
        
        if (s[i] && s[i] != delimeter) //its a token/word starts @ 'h'
            count_tokens++;  
        
        while (s[i] && s[i] != delimeter)
            i++;
    }
    return (count_tokens);
}

char **ft_split(char const *s, char c)
{
    size_t tokens;
    char **ptr;
    size_t start;
    size_t end;
    size_t i;

    i = 0;
    start = 0;
    end = 0;
    tokens = count_tokens(s, c);
    ptr = malloc((tokens + 1) * sizeof(char *));

    if(!ptr)
        return (NULL);

    while (s[end])
    {
        while (s[end] == c)
            end++;

        start = end;
    
        while (s[end] && s[end] != c)
            end++;

        if (end > start)
        {
            size_t len;

            len = end - start;
            ptr[i] = malloc(len + 1);

            if (ptr[i])
            {
                size_t j;

                j = 0;
                while (j < len)
                {
                    ptr[i][j] = s[start + j];
                    j++;
                }
                ptr[i][j] = '\0';
                i++;
            }
        }
    }
    ptr[i] = NULL;
    return ptr;
}

#include <stdio.h>

int main()
{
    char **result = ft_split("  hey, this is new ", ' ');
    int i = 0;

    while (result[i])
    {
        printf("token %d: %s\n",i + 1, result[i]);
        free (result[i]);
        i++;
    }
    free(result);
    return (0);
}