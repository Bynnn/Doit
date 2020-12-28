/*Byn */

#include <stdio.h>

int q8(int n){

	int sum;

	sum = (1+n)*(n/2);

	return sum;

}

int sumof(int a, int b){
	int sum = 0;

	if(a<b){
		for (a;a<=b;a++){
			sum += a;
		}
	}else{
		for (b;b<=a;b++){
			sum += b;
		}


	}
	return sum;
}

int main(void)
{

	printf("%d \n",q8(10));
	printf("%d\n",sumof(7,3));

	return 0;
}

