/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:24:57 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 14:26:08 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc < 3)
    {
        return (0);
    }
    char* s1 = argv[1];
    char* s2 = argv[2];
    char *result;

    result = ft_strjoin(s1, s2);
    printf("%s\n", result);
    free(result);
    return 0;
}
