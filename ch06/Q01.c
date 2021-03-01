#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x=y; y=t;} while(0)

//my
void bubble(int a[], int n)
{
	int i,j;

	for(i=n;i>0;i--)
	{
		for(j=0; j<i; j++)
		{
			if(a[j-1]>a[j])
			{
				swap(int, a[j-1], a[j]);
			}
		}
	}

	for(i=0;i<n;i++)
		printf("x[%d]=%d, ",i,a[i]);
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
