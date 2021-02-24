#include <stdio.h>

void recur(int n)
{
TOP:
	if(n>0)
	{
		recur(n-1);
		printf("%d",n);
		n-=2;
		goto TOP;
	}
}

void main()
{
	int x;
	printf("int n : ");
	scanf("%d", &x);
	recur(x);
}
