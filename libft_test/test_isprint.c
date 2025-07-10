/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:40:50 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/08 11:17:34 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

int main(void)
{
	char c = 0;
	if (isprint(c) != 0)
	{
		printf("%s\n", "its a printable character");
	}
	else
	{
		printf("its not a printable character");
	}
	return 0;
}