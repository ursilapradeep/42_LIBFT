/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:24:33 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/08 12:13:43 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[] = "hello";
	size_t length = ft_strlen(c);
	printf("Length of string is: %zu", length);
	return 0;
}