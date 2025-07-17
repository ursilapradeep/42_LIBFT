/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:38:44 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 12:40:20 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main(){
    char *s1 = "HELLO WORLD";
    char *s2 = "LLO";
    char *s3 = ft_strnstr(s1, s2, 11);
    printf("%s",s3);
return 0;
}