/* REVIEW */

#include <stdio.h>

int mDays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}	// leap year
	};

int isleap(int year){
	if(year % 4 ==0 &&year % 100 != 0)
		return 1;
	return 0;
}

int newDayOfYear(int year, int month, int day){
	int i;

	while(--month){
		day += mDays[isleap(year)][m-i];
	}
	return day;
}

