#include <stdio.h>

int factorial(int n)
{
	int result=1;
	while(1)
	{
		if(n>0)
		{
			result *= n;
		}else
			break; // if n<0 ??
		n--;
	}
	return result;
}




void main()
{
int x;
printf("음수가 아닌 정수를 입력하시오 : ");
scanf("%d",&x);
printf("%d! = %d\n", x, factorial(x));
}
