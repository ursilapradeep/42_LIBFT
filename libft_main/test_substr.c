/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:21:53 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 14:22:24 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
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