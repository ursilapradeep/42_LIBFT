/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:27:39 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 18:43:37 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *s;

	s = ft_itoa(-1234);
	printf("result: %s\n", s);
	free(s);
	return (0);
}
