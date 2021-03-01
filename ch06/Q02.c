#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define swap(type, x, y) do{type t = x; x = y; y=t;} while(0)

void bubble(int a[], int n)
{
	int i,j,k;
	int scnt=0;
	int ccnt=0;

	for(i=0; i<n; i++)
	{
		printf("pass %d: \n",i+1);
		for(j=n-1; j>i;j--)
		{
			ccnt++;
			bool needSwap = false;
		
			for(k=0;k<j;k++)
			{
				printf(" %d",a[k]);
			}
			if(a[j-1]>a[j])
			{
				needSwap = true;
				printf("+");
			}
			else
				printf("-");

			for(k=j;k<n;k++)
			{
				printf("%d ",a[k]);
			}
			if(needSwap)
			{
				swap(int, a[j-1],a[j]);
				scnt++;
			}
		printf("\n");
		}
	}
	printf("swap : %d\n", scnt);
	printf("compare : %d\n", ccnt);
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
