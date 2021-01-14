#include<stdio.h>


typedef struct{
	int year;
	int month;
	int day;
}Date;

/* 1.  */

Date DateOf(int y, int m, int d)
{
	Date date = {y,m,d};
	return date;
}

/* 2.  */

// ref ex02-12.c
int mDays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}	// leap year
	};

int isleap(int year){
	if(year % 4 ==0 &&year % 100 != 0)
		return 1;
	return 0;
}


Date After(Date x, int n)
{
	int i;
	Date d=x;
	int days = x.day;

	for(i=0;i<x.month;i++){
		days += mDays[isleap(x.year)][i];
	}

	// do while로 확인해보자 눈아파서 더 보기 싫어^&^

	for(days+n; days > mDays[isleap(d.year)][d.month]; days -= mDays[isleap(d.year)][d.month]){
		if(d.month<12)
			d.month++;
		else {
			d.month=1;
			d.year++;
		}
		d.day = days;
	}

	return d;

}


Date Before(Date x, int n);


void main(){

	Date x=DateOf(2021,1,14);
	int n= 14;

	Date after;

	printf("%d.%02d.%02d\n",x.year,x.month,x.day);

	after = After(x,n);
	printf("%d.%02d.%02d\n",after.year,after.month,after.day);

}

