/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:38:28 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/10 15:43:23 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "abcdf";
	char s2[] = "abcdf";

	int result = ft_memcmp(s1, s2, 5);

	if (result == 0)
		printf("Blocks are equal.\n");
	else if (result < 0)
		printf("s1 < s2\n");
	else
		printf("s1 > s2\n");

	return 0;
}
