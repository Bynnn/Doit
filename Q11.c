/*Byn */

#include <stdio.h>

int main(void)
{

	int num;
	int i=0;

	printf("num: "); scanf("%d",&num);

	while(num > 0){
		num = num/10;
		i++;
	}	
	printf("%d\n",i);
	
	return 0;
}

