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

Date After(Date x, int n)	// return date after n-days
{
	x.day += n;
	while(x.day > mDays[isleap(x.year)][x.month])
	{
		x.day -= mDays[isleap(x.year)][x.month];
		x.month++;
	}

	return x;
}	


Date Before(Date x, int n)
{
	while(x.day < n)
	{
		if(x.month==1){
			x.year-=1;
			x.month+=12;
		}
		x.day += mDays[isleap(x.year)][--x.month];
	}
	x.day-=n;

	return x;
}

void main(){

	Date x=DateOf(2021,1,14);
	int n= 34;

	Date after;
	Date before;

	printf("%d.%02d.%02d\n",x.year,x.month,x.day);

	after = After(x,n);
	printf("%d.%02d.%02d\n",after.year,after.month,after.day);
	
	before = Before(x,n);
	printf("%d.%02d.%02d\n",before.year,before.month,before.day);
}

