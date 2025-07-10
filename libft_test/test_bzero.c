/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:27:08 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/08 15:45:37 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int main()
{
	char c[10] = "abcdefhklm";
	ft_bzero(c, 5);
	c[4] = '\0';
	for (int i = 0; i< 5; i++)
	{
		if (c[i] == 0)
			printf("0");
		else
			printf("%c\n", c[i]);
	}
	return 0;
}