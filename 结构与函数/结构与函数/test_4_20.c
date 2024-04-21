#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
}myday;

//int main()
//{
//	struct date today = { 4,20,2024 };
//	struct date day = today;
//	printf("today is %d-%d-%d\n", today.year, today.month, today.day);
//	printf("day is %d-%d-%d\n", day.year, day.month, day.day);
//	struct data* p = &today;
//
//
//	return 0;
//}

bool isLeap(struct date d);
int numbersOfDays(struct date d);


int main()
{
	struct date today,tomorrow;
	printf("Enter today's date (month,day,year)");
	scanf("%d %d %d", &today.month, &today.day, &today.year);

	if (today.day != numbersOfDays(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year+1;
	}
	else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	printf("Tomorrow's date is %d-%d-%d\n", tomorrow.year, tomorrow.month, tomorrow.day);

	struct date* p = &myday;
	p->month = 12;
	return 0;
}

int numbersOfDays(struct date d)
{

	int days;
	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (d.month == 2 && isLeap(d))  days = 29;
	else  days = daysPerMonth[d.month-1];
	return days;
}

bool isLeap(struct date d)
{
	bool result = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) result =true;
	return result;

}


