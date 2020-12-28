/*Byn */

#include <stdio.h>

int q1_max4(int a, int b, int c, int d){
	int max = a;

	if(b>max)
		max = b;
	if(c>max)
		max = c;
	if(d>max)
		max =d;

	return max;
}


int q2_min3(int a, int b, int c){
	int min = a;

	if(b<min)
                min = b;
        if(c<min)
                min = c;

	return min;
}

int q3_min4(int a, int b, int c, int d){
	int min = a;
        if(b<min)
                min = b;
        if(c<min)
                min = c;
	if(d<min)
		min = d;

	return min;
}
int main(void)
{
	int a,b,c,d;

	printf("a, b, c, d : ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);

	printf("Max value of a,b,c,d is %d \n",q1_max4(a,b,c,d));
	printf("Min value of a,b,c is %d \n",q2_min3(a,b,c));
	printf("Max value of a,b,c,d is %d \n",q3_min4(a,b,c,d));

return 0;	
		
		
}






