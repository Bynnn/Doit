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

int dayOfYear(int year, int month, int day)
{
	int i;
	int days = day;

	for(i=0;i<month-1;i++)
	{
		days+=mDays[isleap(year)][i];
	}
	return days;
}

void main()
{
	int year, month, day;

	printf("Year : ");
	scanf("%d",&year);

	printf("Month : ");
	scanf("%d",&month);

	printf("Day : ");
	scanf("%d",&day);

	printf("%d days of %d\n",dayOfYear(year,month,day), year);
}
