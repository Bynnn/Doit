#include<stdio.h>
#include<stdlib.h>

int search(const int x[], int key)
{
	int i,j;

	printf("  |0 1 2 3 4 5 6\n----------\n");
	for(i=0;i<7;i++)	// n = 7
	{
		printf("  |");
		for(j=0;j<7;j++)
		{
			if(j==i)
				printf("* ");
			else 
				printf("  ");
		}
		printf("\n %d|6 4 3 2 1 9 8\n",i);

		if(x[i] == key){
			printf("%d is exist.",key); 
			return i;
		}
	}
	return -1;
}

void main()
{
	int x[] = {6,4,3,2,1,9,8};
	int num, idx;
	printf("number : ");
	scanf("%d",&num);

	idx = search(x,num);
	if(idx == -1)
		printf("fail to search\n");
}
