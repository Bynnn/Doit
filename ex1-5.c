/*Byn */

#include <stdio.h>

int main(void)
{

	int i, n;
	int sum =0;

	puts("sum 1 to n");
	printf("n : ");	scanf("%d",&n);

	for(i = 1; i <=n ; i++){
		sum += i;
	}

	printf("Sum 1 to %d is %d\n",n, sum);

	return 0;
}

