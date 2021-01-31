/*Binary Search*/

#include <stdio.h>
#include <stdlib.h>

int bi_search(const int a[], int n, int key)
{
	int pl = 0;
	int pc;
	int pr = n-1;

	do
	{
		pc = (pl + pr) / 2;
		if(a[pc] == key) // success
			return pc;
		else if(pc < key)
			pl = pc+1;
		else
			pr = pc -1;
	}
	while(pl <= pr);
	return -1;
}

void main()
{
	int i,nx,key,idx;
	int *x;
	puts("Binary Search");
	printf("number of elements : ");
	scanf("%d", &nx);
	x = calloc(nx,sizeof(int));
	printf("x[n] < x[n+1]\n");

	printf("x[0] : ");
	scanf("%d",&x[0]);
	
	for(i=1; i<nx; i++)
	{
		do{
			printf("x[%d] : ",i);
			scanf("%d",&x[i]);
		}while(x[i]<x[i-1]);
	}
	printf("number: " );
	scanf("%d",&key);

	idx = bi_search(x,nx,key);
	if(idx ==-1)
		printf("fail to search \n");
	else 
		printf("%d is x[%d]\n",key,idx);
       free(x);
}       
