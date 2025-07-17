/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:04:57 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/07 16:12:17 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"
#include <assert.h>

int main()
{
	// Positive tests
    assert(ft_isalpha('A') != 0);
    assert(ft_isalpha('z') != 0);

    // Negative tests
    assert(ft_isalpha('5') == 0);
    assert(ft_isalpha('$') == 0);
    assert(ft_isalpha(' ') == 0);
    assert(ft_isalpha('\n') == 0);
    assert(ft_isalpha(128) == 0);

    printf("All tests passed!\n");
    return 0;
}