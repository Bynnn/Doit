/* ex2-08 */

#include <stdio.h>

int crad_convr(unsigned x, int n, char d[]){
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits =0;

	if(x==0){
		d[digits++] = dchar[0];
	}else 
		while(x){
			d[digits++] = dcahr[x%n];
			x =/ n;
		}
	return digits;
}


void main(){
	int i;
	unsigned no;
	int cd;		// 기수 
	int dno;	// 변환 후 자리수
	char cno[512];	// 결과 반환 받을 문자열

	printf("no : ");
	scanf("%u", &no);

	do {
		printf("cd : ");
		scanf("%u", &cd);
	}while(cd < 2 || cd >32)

	dno = card_convr(no,cd,cno);
	
	printf("%d진수 : ", cd);

	for(i = dno-1 ; i >= 0 ; i--)
	{
		printf("%c",cno[i]);
	}

}

