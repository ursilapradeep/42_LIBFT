/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:55:17 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/15 13:53:36 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

int main() {
   int n = 5;
   int *ptr;
 
   ptr = (int*)calloc(n, sizeof(int));
   
   if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
   }
   
   printf("Array elements after calloc: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", ptr[i]);
   }
   printf("\n");
   
   free(ptr);
   return 0;
}
