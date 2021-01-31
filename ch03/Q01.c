#include<stdio.h>
#include<stdlib.h>

int search(const int a[], int n, int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
			return i;
	}
	return -1;
}



void main()
{
	int i,nx,key,idx;
	int *x;
	printf("number of elements : ");
	scanf("%d", &nx);
	x=calloc(nx+1,sizeof(int));

	for(i=0;i<nx;i++)
	{
		printf("x[%d] : ", i);
		scanf("%d",&x[i]);
	}
	printf("number : ");
	scanf("%d",&key);

	idx = search(x,nx,key);
	if(idx == -1)
		printf("fail to search\n");
	else
		printf("%d is x[%d]\n", key, idx);
	free(x);
}
