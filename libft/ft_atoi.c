#include <unistd.h>

#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    
    if (str[i] == '-' || str[i] == '+' )
    {   
        if (str[i] == '-')
            sign = -1;
        i++;
    }
        
    while (str[i] >= '0' && str[i] <= '9')
    {
            nb = nb * 10 + (str[i] - '0');
            i++;
    }
    return (nb * sign );
}

#include <stdio.h>  
#include <stdlib.h>

int main()
{

    // string to be converted
    char strToConvert[] = "   \n\t -12399875";

    // converting string using atoi()
    int ConvertedStr = atoi(strToConvert);

    // printing the Converted String
    printf("String to be Converted: %s\n", strToConvert);
    printf("Converted to Integer: %d\n", ConvertedStr);

    return 0;
}