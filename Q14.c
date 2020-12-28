/*Byn */

#include <stdio.h>

int main(void)
{

	int i,j;
	int w,h;
	printf("w, h: ");
	scanf("%d",&w);
	scanf("%d",&h);

	printf("%d,%d",w,h);
	for(i=0;i<h;i++){
		for(j=0; j<w ;j++){
			putchar('*');
		}
		printf("\n");
	}

/*
	while(h){
		while(w){
			printf("*");
			h--;
		}
		w--;
	}*/

}

