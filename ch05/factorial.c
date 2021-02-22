#include <stdio.h>

int factorial(int n)
{
	if(n>0)
	{
		return n*factorial(n-1);    // recursive call
	}else
		return 1; // if n<0 ??
}

void main()
{
	int x;
	printf("음수가 아닌 정수를 입력하시오 : ");
	scanf("%d",&x);
	printf("%d! = %d", x, factorial(x));
}
