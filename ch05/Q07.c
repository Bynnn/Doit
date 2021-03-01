#include <stdio.h>

void move(int no, int x, int y)
{
	IntStack stk;
	Initialize(&stk, 100);
/*GKRLTLFGEKDFF*/
		
	if(no > 1)
		move(no-1, x, 6-x-y);
	printf("move [%d] from %d to %d\n",no,x,y);

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
