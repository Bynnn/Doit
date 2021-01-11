/*Byn */

#include <stdio.h>

void triLB(int n){
	int i,j;
	printf("LB\n");
	for(i = 1; i <= n ; i++){
		for(j=0;j<i;j++)
			putchar('*');
	
		printf("\n");
	}
}

void triLU(int n){
	int i,j;
	printf("LU\n");
	for(i = 1; i <= n ; i++){
		for(j=1;j<=n-i+1;j++)
			putchar('*');
	
		printf("\n");
	}
}

void triRB(int n){
	int i,j;
	printf("RB\n");

	for(i=0;i<n;i++){
		for(j=n-i-1;j>0;j--)
			printf(" ");
		for(j=0;j<i+1;j++)
			printf("*");
	printf("\n");
	}
}
void triRU(int n){
	int i,j;
	for(i = 0; i < n ; i++){
		for(j=0;j<i;j++)
			putchar(' ');
		for(j=n-i;j>0;j--)
			printf("*");
	
		printf("\n");
	}

}
	 
int main(void)
{
	triLB(3);
	printf("\n LB\n");
	
	triLU(3);
	printf("\nLU\n");


	triRB(3);
	printf("RB\n");
	
	triRU(3);
	printf("RU\n");

	return 0;
}

