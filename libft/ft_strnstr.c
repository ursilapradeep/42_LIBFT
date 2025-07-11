#include "string.h"
#include "stdio.h"


char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
size_t i;
size_t j;

size_t k;

if  (*needle == '\0')
    return (char *)haystack;
i = 0;
while (haystack[i] && i < len)
{
    j = 0;
    while (haystack[i+j] == needle[j])
    {
        j++;
        if(needle[j]=='\0'){
            return ((char *)&haystack[i]);
        }
    }
    i++;
}
return NULL;
}

int main(){
    char *s1="HELLO WORLD";
    char *s2="LLO";
    char *s3=ft_strnstr(s1,s2,11);
    printf("%s",s3);
return 0;
}