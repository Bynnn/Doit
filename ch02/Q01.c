/* Q1 */

#include <stdio.h>

int minof(cost int a[], int n){
	int i;
	int min = a[0];
	
	for(i=1;i<n;i++){
		if(min>a[i])
			min = a[i];
	}
	return min;
}


/* Q2 */
int sumof(const int a[], int n){
	int i;
	int sum = 0;

	for (i=0; i<n; i++)
	{
		sum += a[i];
	}
	return sum;
}


/* Q3 */
double aveof(const int a[], int n){
	int i;
	int sum=0;

	for (i=0; i<n; i++)
		sum += i;
	return sum/(double)n;
}



/* 뒷 부분은 ex02-5.c 참조 */






