/*ex2-05*/

#include <stdio.h>
#include <stdlib.h>


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

	printf("키 : ");
	for (i=0;i<number;i++)
		scanf("%d",&height[i]);
	
	printf("최댓값은 %d입니다.%n",maxof(height, number));

	free(height);

}




