/* Q07.c 다시보기^&^ 
 * 출력되는 화면 수정필요
 * */
#include <stdio.h>


int convr(unsigned x, int n, char d[])
{
	char dchar[] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;

	if(x==0)
		d[digits++] = dchar[0];
	else 
		while(x){
			d[digits++] = dchar[x%n];
			x /= n;

			if(x != 0){
			printf("%2d|%10d ...%d\n",n,x,d[digits-1]);
			printf("   +------------\n");
			}
		}
	return digits;
}

void main()
{       
        unsigned num;
        int radix;
        char d[512];
        
	int i;
	int n;

        printf("10진수를 기순 변환\n");

        printf("변환하는 음이 아닌 정수 : ");
        scanf("%u",&num);       // unsinged

        do{
        printf("어떤 진수로 변환할까요");
        scanf("%d",&radix);
        }while(radix<2 || radix >36);

        n = convr(num, radix, d);
	
	for(i=0;i<n;i++)
	{
		printf("%d",d[i]);
	}

}	
