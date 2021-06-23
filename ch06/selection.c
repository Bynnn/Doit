#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x=y; y=t;} while(0)

void bubble(int a[], int n)
{
	int i,j;

	for(i=0;i<n-1;i++)
	{
		int exchg=0;
		for(j=n-1; j>i; j--)
		{
			if(a[i]>a[i+1])
			{
				swap(int, a[i], a[i+1]);
				exchg++;
			}
		}
		if(exchg ==0)break;
	}
	for(i=0;i<n-1;i++)
	{
		printf("x[%d]=%d\n",i,a[i]);
	}
	printf("x[%d]=%d\n",n,a[n-1]);
}


int* selection(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++) {
		int min =i;
		for(j=i+1; j < n; j++)
			min=j;
		swap(int, a[i], a[min]);
	}	
	for(i=0;i<n-1;i++)
	{
		printf("x[%d]=%d\n",i,a[i]);
	}
	
	printf("x[%d]=%d\n",n,a[n-1]);
}

void main()
{
	int i, nx;
	int *x;

	printf("selction sort \nthe number of elements: ");
	scanf("%d",&nx);

	x = calloc(nx,sizeof(int));

	for(i=0;i<nx;i++)
		{
			printf("x[%d] : ",i);
			scanf("%d",&x[i]);
		}

	selection(x,nx);
	free(x);
}
