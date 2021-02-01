#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int *a, const int *b)
{
	if(*a < *b)
	{
		return -1;
	}else if(*a > *b)
	{
		return 1;
	}else
		return 0;

}

void main()
{
	int i, nx, key;
	int *x;
	int *p;

	printf("the number of elements : \n");
	scanf("%d",&nx);

	x = calloc(nx, sizeof(int));

	for(i=0;i<nx;i++){
		printf("x[%d] : ",i);
		scanf("%d", &x[i]);
	}

	printf("key : ");
	scanf("%d",&key);

	p = bsearch(&key, x, nx, sizeof(x), (int(*)(const void *, const void *)) int_cmp); // review
	if(p == NULL)
	{
		printf("fail to search\n");
	}else
	{
		printf("%d is x[%d]\n",key,(int)(p-x));
	}
	free(x);
}






