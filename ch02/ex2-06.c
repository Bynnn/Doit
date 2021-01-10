/*ex2-06*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n){
	int i;
	int max = a[0];

	for(i=1; i < n ; i++){
		if(a[0] < a[i])
			max = a[i];
	}
	return max;
}

void main(){
	int i;
	int *height;
	int number;

	printf("사람 수 : ");
	scanf("%d", &number);

	height = calloc(number,sizeof(int));
	
	
	free(height);

}




