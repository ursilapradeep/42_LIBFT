/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:35:59 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/09 17:49:12 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	int	diff;
	char s1[] = "hello";
	char s2[] = "";
	diff = ft_strncmp(s1, s2, 5);
	printf("%d\n", diff);
	return (0);
}