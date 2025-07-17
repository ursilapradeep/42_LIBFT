/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:34:27 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/07 16:35:16 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"
#include <assert.h>

int main()
{
	int i;
	
	for (i = 48; i <= 57; i++)
		assert(ft_isdigit(i));
	
	i = 0; 
	while (i < 48)
	{
		assert(ft_isdigit(i) == 0);
		i++;
	}

	i = 58;
	while(i < 128)
	{
		assert(ft_isdigit(i) == 0);
		i++;
	}

	printf("all tests passed");
	return 0;
}