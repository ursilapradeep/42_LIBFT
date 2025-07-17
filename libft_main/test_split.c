/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:37:12 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 14:39:48 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main()
{
    char **result = ft_split("  hey, this is new ", ' ');
    int i = 0;

    while (result[i])
    {
        printf("token %d: %s\n",i + 1, result[i]);
        free (result[i]);
        i++;
    }
    free(result);
    return (0);
}