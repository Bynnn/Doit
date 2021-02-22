#include <stdio.h>

// x > y ??

int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else
		return gcd(y,x%y);
}

void main()
{
	int x,y;
	scanf("x : ",&x);
	scanf("y : ",&y);
	printf("gcd(x,y) = %d", gcd(x,y));

}
