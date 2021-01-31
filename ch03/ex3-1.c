#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	int i = 0;
	while(1) {	
		if(i==n){	// 검색 실패
			return -1;
		} 
		if(a[i]==key) // success
		       return i;
		i++;
	}//while
}//search

void main(void)
{
	int i, nx, key, idx;
	int *x;
	puts("linear search\n number of elements : ");
	scanf("%d", &nx);

	x=calloc(nx,sizeof(int));
	for(i=0; i<nx; i++)
	{
		printf("x[%d] : ",i);
		scanf("%d",&x[i]);
	}
	printf("number : ");
	scanf("%d", &key);
	idx = search(x,nx,key);

	if(idx == -1)
		puts("fail to search");
	else
		printf("%d is x[%d]\n",key,idx);
	free(x);
}
