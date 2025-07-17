/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:08:00 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/10 14:31:59 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>


size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

int main() 
{
	const char str[] = "welcome to Germany";
	const char ch = 't';

	char* result = (char*)ft_memchr(str, ch, ft_strlen(str));
	
	if (result != NULL) 
	{
		printf("'%c' found at position %ld\n", ch, result - str);
	}
	else {
		printf ("'%c' not found in string \n", ch);
	}
	return (0);
}
