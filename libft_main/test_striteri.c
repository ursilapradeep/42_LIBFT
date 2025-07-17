/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:22:48 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/16 12:34:25 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

void to_uppercase(unsigned int i, char *c)
{
	if(*c >= 'a' && *c <= 'z')
	*c = *c - 32;
}

int main()
{
	char str[] = "hello";
	ft_striteri(str, to_uppercase);
	printf("%s\n",str);
}