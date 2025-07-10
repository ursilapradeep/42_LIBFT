/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:39:18 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/09 14:31:36 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "this is simple";
	char *ch;
	printf("Searching for the character 's' in the given string i.e. \"%s\"\n", str);
	ch = ft_strchr(str, 's');
	
	while (ch !=  NULL)
	{
	printf("found the position: %ld\n" , ch - str + 1);
	ch = ft_strchr(ch + 1, 's');
	}
	return (0);
}