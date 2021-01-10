#include <stdio.h>

void main()
{
	int n,i;
	int prime[500];	// evens are not prime but 2
	int ptr = 0;
	prime[ptr] = 2;

	for(n=3; n<=1000; n+=2)	// odd
	{
		for(i=0;i<ptr;i++)
		{
			if(n % prime[i])
				break;
		}
		if(i==ptr)
			prime[ptr++] = n;
	}

	for(i=0;i<prt;i++)
		printf("%d",prime[i]);
}


				
