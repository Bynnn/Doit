#include <stdio.h>

int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else
		return gcd(y,x%y);
}

int gcd_array(const int a[], int n)
{
	int i;
	int result=a[0];
	for(i=1;i<n;i++)
	{
		result = gcd(result,a[i]);
	}
	return result;
}

void main()
{
	int a[4] = {2,6,30,12};
	
	printf("gcd(2,6,30,12) = %d\n", gcd_array(a,4));

}
