#include <stdio.h>

void recur(int n)
{
	if(n>0)
	{
		recur(n-1);
		printf("%d",n);
		recur(n-2);
	}
}

void main()
{
	int x;
	printf("int n : ");
	scanf("%d", &x);
	recur(x);
}
