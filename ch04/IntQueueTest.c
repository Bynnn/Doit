#include <stdio.h>
#include "IntQueue.h"

int main()
{
	IntQueue que;

	if(Initialize(&que, 64) == 1)
	{
		printf("fail to create a queue");
		return 1;
	}
	while(1)
	{
		int menu;
		int x;

		printf("\nCurrent Status : %d / %d (Size / Capacity)\n", Size(&que), Capacity(&que));
		printf("(1)Enque (2)Deque (3)Peek (4)Print (0)Exit\nMenu : ");
		scanf("%d",&menu);
		
		if(menu == 0)		
			break;		//break while


		switch(menu)
		{
			case 1:
				printf("Enque : ");
				scanf("%d",&x);
				if(Enque(&que,x) == -1)
					printf("fail to enque\n");
				break;
			case 2:
				if(Deque(&que, &x) == -1)
					printf("fail to deque\n");
				else
					printf("Deque : %d",x);
				break;
			case 3 : 
				if(Peek(&que,&x))
					printf("fail to peek\n");
				else
					printf("Peek : %d", x);
				break;
			case 4:
				printf("Print : ");
				Print(&que);
				break;
		}
	}
	Terminate(&que);
	return 0;
}




