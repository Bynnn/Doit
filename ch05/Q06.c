#include <stdio.h>

void move(int no, int x, int y)
{
	char arr[3] = {'A', 'B', 'C'};

	if(no > 1)
		move(no-1, x, 6-x-y);
	printf("move [%d] from %c to %c\n",no,arr[x-1],arr[y-1]);

	if(no>1)
		move(no-1,6-x-y,y);
}

void main()
{
	int n;
	printf("number of plate: ");
	scanf("%d", &n);
	move(n,1,3);

}
