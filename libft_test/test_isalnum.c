/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:58:13 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/07 18:00:05 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <assert.h>
#include "../libft/libft.h"
#include <stdio.h>

void alpha_test_range(int start, int end)
{
	for (int i = start ; i <= end; i++)
	{
		assert((ft_isalnum(i)) == 1);
	}
}
void nonalpha_test_range(int start, int end)
{
	for (int i = start ; i < end; i++)
	{
		assert((ft_isalnum(i)) == 0);
	}
}
int main()
{
	alpha_test_range(48, 57);
	alpha_test_range(65, 90);
	alpha_test_range(97, 122);
	//non -alphanumeric
	nonalpha_test_range(0, 48); 
	nonalpha_test_range(58, 65); 
	nonalpha_test_range(91, 97);
	nonalpha_test_range(123, 127); 
	printf("all tests are passed");
	return 0;
}