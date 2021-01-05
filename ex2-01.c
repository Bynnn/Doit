/* ex2-1*/

#include <stdio.h>

#define N 5	// 배열 요소의 개수 


void main()
{
   int i;
   int a[N];
   
   for(i =0; i<N; i++)
   {   
      printf("a["+i+"] : ");
      scanf("%d",&a[i]);
   }

   prinft("각 요소의 값 ");

   for(i =0; i<N; i++)
   {   
      printf("%d",a[i]);
   }

}

