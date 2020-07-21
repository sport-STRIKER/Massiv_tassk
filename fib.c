#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n = 5;
   int feb[n];

   int num_n = 0;
   int num_n_1 = 1;
   int num_n_2 = 1;
   int i = 0;

   while (i < n)
   {
     num_n = num_n_1 + num_n_2;
     
     feb[i] = num_n;
     i++;
        
     num_n_1 = num_n_2;
     num_n_2 = num_n;
    }

   i = 0;
    
   while (i < n)
   {
     printf("%d ", feb[i]);
      
     i++;
   }
    printf("\n"); 

    return 0;
}
