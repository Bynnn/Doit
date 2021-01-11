/*Byn */

#include <stdio.h>

int main(void)
{

	int a,b;
	do{
	printf("a, b: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	}
	while (a>b);
	
	printf("b-a = %d \n", b-a);
}

