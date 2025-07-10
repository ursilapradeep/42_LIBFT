/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:13:02 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/08 17:52:17 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	int src[5] = "Greeks";
	int dst[5] = "Quiz";
	ft_memmove(dst, src, sizeof(dst));
	printf("%s\n", src);
	return 0;
}