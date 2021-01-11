#include <stdio.h>
#include <stdlib.h>

#define swap(type, x,y) do(type t = x; x=y; y=t;) while (0)

void ary_reverse(int a[], int n)
{
	int i;
	for (i=0; i<n/2; i++){
		swap(int, a[i], a[n-i]);
	}
}

void main(){
	int i;
	int *x;
	int nx;

	printf("요소의 개수");
	scanf("%d", &nx);

	x=calloc(nx, sizeof(int));

	printf("%d개의 정수의 개수\n", nx);

	for(i = 0; i < nx ; i++)
	{
		scanf("%d",&x[i]);
	}
	
	ary_reverse(x,nx);
	
	for(i = 0; i < nx ; i++)
	{
		printf("%d\n",nx);
	}
	free(x)
}
