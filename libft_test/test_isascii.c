/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:28:24 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/07 16:29:47 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"
#include <assert.h>

int main()
{
	int i;

	i = 0;
	
	for (i = 0; i <= 127; i++)
	//positive test case
		assert(ft_isascii(i) != 0);

	//negative test cases
	assert(ft_isascii(128) == 0);
	assert(ft_isascii(-1) == 0);
	printf("all tests passed");
	return (0);
}