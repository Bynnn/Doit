/* ex2-3 */ 

#include <stdio.h>
#include <stdlib.h>

void main()
{
   int *x;   // 정적할당
   x = calloc(1,sizeof(int));
   
   if(x ==NULL)
   { 
      puts("메모리 할당 실패");
   }else{
      *x = 57;
      printf("*x = %d",*x);
      free(x);
   }
}

