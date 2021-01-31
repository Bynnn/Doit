#include<stdio.h>
#include<stdlib.h>

int bi_search(const int x[], int key)
{
	int i;

	int pl = 0;
	int pr = 7-1;
	int pc;


	printf("  |0 1 2 3 4 5 6\n----------\n");

	do
	{
		pc = (pl + pr) / 2;
		
		printf("  |");
		for(i=0;i<7;i++)
		{
			if(i==pc)
				printf("+ ");
			else if(i==pl)  
				printf("<-");
			else if(i==pr)
				printf("->");
			else
				printf("  ");
		}
		printf("\n %d|1 2 3 5 6 8 9\n",i);

		if(x[i] == key){
			printf("%d is exist.",key); 
			return i;
		}
		if(x[pc] == key) // success
			return pc;
		else if(pc < key)
			pl = pc+1;
		else
			pr = pc -1;

	}while(pl <= pr);
	return -1;

}

void main()
{
	int x[] = {1,2,3,5,6,8,9};
	int num, idx;
	printf("number : ");
	scanf("%d",&num);

	idx = bi_search(x,num);
	if(idx == -1)
		printf("fail to search\n");
}
