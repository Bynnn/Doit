/*Byn */

#include <stdio.h>

int main(void)
{

	int n;

	printf("n: "); scanf("%d", &n);

/*	
	if(n>0)
		printf("p \n");
	else if(n < 0)
		printf("n \n");
	else 
		printf("0\n");

*/
	if(n==0)
		printf("0\n");
	else
		n>0 ? printf("p\n") : printf("n\n");

	return 0;
}

