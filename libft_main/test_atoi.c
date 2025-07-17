/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:43:14 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 12:44:30 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>  

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