#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
     size_t i;

     i = 0;
     while (i < count * size)
     {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return ptr;
}

#include <stdio.h>
#include <stdlib.h>
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