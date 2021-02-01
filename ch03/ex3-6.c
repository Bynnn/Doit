/*  ex 3C-1  */

#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int mul(int a, int b){
	return a*b;
}

void kuku(int(*calc)(int,int))
{
	int i,j;
	for(i = 1; i <= 9; i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%3d",(*calc)(i,j));
		}//for j
		printf("\n");
	}//for i
}

void main()
{
	printf("SUM\n");
	kuku(sum);

	printf("MUL\n");
	kuku(mul);
}




