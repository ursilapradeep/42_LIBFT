/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:46:57 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/09 15:51:33 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main()
{
	char str[] = "hello world";
	char *ch;

	ch = ft_strrchr(str, 'o');
	if (ch != NULL)
	{
		printf("Last: %s\n", ch);
	}
	return 0;
}