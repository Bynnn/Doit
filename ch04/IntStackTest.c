#include<stdio.h>
#include"IntStack.h"

int main()
{
	IntStack s;
	if(Initialize(&s, 64) == -1)
	{
		printf("fail to create a stack");
		return -1;
	}

	while(1){
		int menu, x;
		printf("size / capacity : %d / %d\n", Size(&s),Capacity(&s));
		printf("1.push  2.pop  3.peek  4.print  5.search  0.exit\n");
		scanf("%d",&menu);

		if(menu == 0)
			break;

		switch(menu){
			case 1:
				printf("Push : ");
				scanf("%d",&x);
				if(Push(&s, x) == -1)
					printf("fail tp push\n");
				break;
			case 2:
				if(Pop(&s,&x) == -1)
					printf("fail to pop\n");
				else 
					printf("Pop : %d\n", x);
				break;
			case 3: 
				if(Peek(&s,&x) == -1)
					printf("fail to peek\n");
				else
					printf("Peek : %d\n",x);
				break;
			case 4:
				Print(&s);
				break;
			case 5:
				printf("Search : ");
				scanf("%d",&x);

				if(Search(&s, x) == -1)
					printf("fail to Search \n");
				else 
					printf("%d : stack[%d]\n", x, Search(&s,x));
				break;
		}
	}
	Terminate(&s);
	return 0;
}



