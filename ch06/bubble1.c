#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x=y; y=t;} while(0)

//my
void bubble(int a[], int n)
{
	int i,j;

	for(i=0;i<n-1;i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(a[i]>a[i+1])
			{
				swap(int, a[i], a[i+1]);
			}
		}
		printf("x[%d]=%d, ",i,a[i]);
	}
	printf("x[%d]=%d\n",n,a[n-1]);
}

void main()
{
	int i, nx;
	int *x;

	printf("bubble sort \nthe number of elements: ");
	scanf("%d",&nx);

	x = calloc(nx,sizeof(int));

	for(i=0;i<nx;i++)
		{
			printf("x[%d] : ",i);
			scanf("%d",&x[i]);
		}
	bubble(x,nx);
	free(x);
}
