#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x=y; y=t;} while(0)

int * selection(int a[], int n){
	int i,j,k;
	
	for(i=0; i<n-1; i++) {
		int min =i;
		for(j=i+1; j < n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
		}
	
				for(k=0;k<=j;k++){
					if(k==i)
						printf("* ");
					else if(k==j)
						printf("+ ");
					else 
						printf("  ");
				}		
						printf("\n");
				for(k=0;k<n;k++)
					printf("%d ",a[k]);
	
		}
		printf("\n");		
		swap(int, a[i], a[min]);
	}	
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
