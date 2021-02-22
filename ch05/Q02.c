#include <stdio.h>

// x > y ??

int gcd(int x, int y)
{
	int tmp;

	while(1)
	{
		if(y == 0)
			return x;  // ////// return ->> no need break?
		else
		{	
			tmp = y;
			y = x%y;
			x = tmp;
		}
	}
}

void main()
{
	int x,y;
	printf("x : ");
	scanf("%d",&x);
	printf("y : ");
	scanf("%d",&y);
	printf("gcd(x,y) = %d\n", gcd(x,y));
}


