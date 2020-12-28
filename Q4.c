/*Byn */

#include <stdio.h>

int med3(int a, int b, int c)
{
	if(a >= b){
		if(b >= c)
			return b;
		else if(a <= c)
			return a;
		else
			return c;
	}
	else if(a > c)
		return a;
	else if(b>c)
		return c;
	else 
		return b;
}
	
int med(int a, int b, int c)
{
	if(a>=b&&b>=c)
		return b;
	if(c>=b&&b>=a)
		return b;
	
	if(a>=c&&c>=b)
		return c;
	if(b>=c&&c>=a)
		return c;

	if(b>=a&&a>=c)
		return a;
	if(c>=a&&a>=b)
		return a;

}
			
int main(void)
{
	int a;
	int b,c;


	printf("1. Get median value. \n");

	printf("The median value is %d \n", med3(3,2,1));
	printf("The median value is %d \n", med3(3,2,2));
	printf("The median value is %d \n", med3(3,1,2));
	printf("The median value is %d \n", med3(3,2,3));
	printf("The median value is %d \n", med3(2,1,3));
	printf("The median value is %d \n", med3(3,3,2));
	printf("The median value is %d \n", med3(3,3,3));
	printf("The median value is %d \n", med3(2,2,3));
	printf("The median value is %d \n", med3(2,3,1));
	printf("The median value is %d \n", med3(2,3,2));
	printf("The median value is %d \n", med3(1,3,2));
	printf("The median value is %d \n", med3(2,3,3));
	printf("The median value is %d \n", med3(1,2,3));

	printf("2. Get median value. \n");

	printf("The median value is %d \n", med(3,2,1));
	printf("The median value is %d \n", med(3,2,2));
	printf("The median value is %d \n", med(3,1,2));
	printf("The median value is %d \n", med(3,2,3));
	printf("The median value is %d \n", med(2,1,3));
	printf("The median value is %d \n", med(3,3,2));
	printf("The median value is %d \n", med(3,3,3));
	printf("The median value is %d \n", med(2,2,3));
	printf("The median value is %d \n", med(2,3,1));
	printf("The median value is %d \n", med(2,3,2));
	printf("The median value is %d \n", med(1,3,2));
	printf("The median value is %d \n", med(2,3,3));
	printf("The median value is %d \n", med(1,2,3));


	return 0;
}

/* Q5 : if(b>=a) is "false", then (b<a) must be "true" but in this code it have tp check twice */

