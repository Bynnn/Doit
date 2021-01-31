#include<stdio.h>
#include<stdlib.h>

int search_idx(const int a[], int n, int key, int idx[])
{
	//idx initialize ???
	int i;
	int j = 0;
	for(i=0;i<n;i++)
	{
		if(a[i] == key){
			idx[j++] = i;
		}
	}
	return j-1;
}

void main()
{
	int i, nx, key, ni;
	//int *x;
	int idx[9];

	int x[] = {1,9,2,9,4,6,7,9};
	ni = search_idx(x,9,9,idx);

	for(i=0;i<=ni;i++)
		printf("idx[%d]=%d\n",i,idx[i]);
}
