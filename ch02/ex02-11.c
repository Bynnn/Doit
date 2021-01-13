#include<stdio.h>

vodi main(){
	int i, n;
	int prime[500];
	int ptr = 0;

	prime[ptr++] = 2;	//prime[0] = 2
	prime[ptr++] = 3;	//prime[1] = 3	(ptr = 2)

	for(n=5; n<=1000; n += 2){	// for odd
		int flag = 0; 		// false
		
		for(i = 1; prime[i]*prime[i] <= n; i++)	// smaller than Square root of i
		{
			if(n%prime[i] == 0){
				flag = 1;
				break;
			}
		}if(flag==0)
			prime[ptr++] = n;

	}//for n

	for(i = 0; i < ptr; i++)
		printf("%d",prime[i]);
}
