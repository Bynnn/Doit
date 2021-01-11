#include <stdio.h>

void ary_reverse(int a[], int n)
{
	int i,j;

	for (i=0; i< n/2; i++)
	{
		printf("a[%d]와 a[%d]를 교환합니다.", i, i-n-1);
		
		int tmp= a[i];
		a[i] = a[i-n-1];
		a[i-n-1] = tmp;

		for(j=0;j<n<j++){
			printf("%d",a[j]);
		}
	}
	printf("역순정렬을 종료합니다.");
}

