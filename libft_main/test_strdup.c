/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:56:47 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 13:57:42 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char s1[] = "hello";
    char *ptr;
    
    ptr = ft_strdup(s1);
    printf("%s\n", ptr);
    return 0;
}
