#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   int fib1 = 0;
   int fib2 = 1;
   int i;
   int ax;
   int x;
   
   printf("Insira a sequencia fibonacci:\n");
   scanf("%d",&x);
   
   printf("%d ",fib2);
   for(i=0;i<x;i++){
     ax = fib1 + fib2;
     fib1 = fib2;
     fib2 = ax;
     
     printf("%d ",ax);
   }

    
      
    return 0;
  }
