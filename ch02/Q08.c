/* Q02 */

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void ary_copy(int a[], const int b[], int n)
{
	int i;
// initialize a[]?
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
}


/* Q09 */

void ary_rcopy(int a[], int b[], int n)
{
	int i;
	for(i=0;i<n;i++){
		a[i] = b[n-i];
	}
}


/* Q10 */

void shuffle(int a[], int n)
{
	int i;
	int r;
	int tmp;

	srand(time(NULL));

	for(i=0;i<n;i++)
	{
		r =rand()%n;

		tmp = a[r];
		a[i] = a[r];
		a[r] = tmp;
	}

}



