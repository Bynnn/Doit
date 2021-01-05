/* ex2-4 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i;
   int *a;
   int na;

   printf("요소의 개수 : ");
   scanf("%d",&na)

   a = calloc(na, sizeof(int));
   
   if(a==NULL){
   printf("fail");
   }else
   for(i =0; i<na; i++)
   {   
      scanf("%d", &a[i]);   // 배열처럼 접근
   }
   for (i =0;i <na ; i++)
   {
      printf("%d\n",a[i]);
   }
   
   free(a);
}

