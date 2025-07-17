/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:32:09 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 14:34:18 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main()
{
    const char *s1 = "   Hello world   ";
    const char *set = "   ";
    char *trim;

    trim = ft_strtrim(s1, set);
    printf("Trimmed: \"%s\"\n", trim);
    if (!trim)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    free(trim);
    return (0);
}