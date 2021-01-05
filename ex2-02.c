/* ex2-2 */

#include <stdio.h>


void main(void)
{
   int i;
   int a[5] = {1,2,3,4,5};
   int na = sizeof(a) / sizeof(a[0]);

   pritnf("배열 a의 요소의 개수는 %d개 입니다. \n", na);

   for (i =0;i <5 ; i++)
   {
      printf("%d\n",a[i]);
   }
}

