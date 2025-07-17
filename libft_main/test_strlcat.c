/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:05:31 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/09 11:18:51 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char src[1024] = "dead";
	char dst[] = "I am";
	ft_strlcat(dst, src, 10);
	printf("%s\n", dst);
	return (0);
}
