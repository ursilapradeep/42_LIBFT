/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:42:05 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 11:00:05 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	int i;

	i = 0;
	while (argv[1][i])
	{
		
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}