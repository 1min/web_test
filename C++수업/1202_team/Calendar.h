#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char *strMONTH[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
char *strDAY[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};



/*******************************************/
/*****  Declaration of types & macros  *****/
/*******************************************/

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

typedef struct _CALENDAR
{
	UINT year;      /* 1 ~ 11759060 */
	UINT month;     /* 1 ~ 12 */
	UINT Leap;      /* TRUE, FALSE */
	UINT LastDay;   /* 28, 29, 30, 31 */
	UINT FirstDay;  /* SUN=0, MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6 */
} CALENDAR;



/**************************************/
/*****  Declaration of functions  *****/
/**************************************/

/* Create Calendar with year and month */
CALENDAR CreateCalendar(const UINT Year, const UINT Month);

/* Display calendar */
void ShowCalendar(const CALENDAR cal);

/* Display colored calendar */
void ShowColoredCalendar(const CALENDAR cal);

/* Get total day from 1st/1/1 to 1st/(Month)/(Year) */
UINT GetTotalDay(const UINT Year, const UINT Month);

/* Distinguish between Leap and non-Leap */
int DistLeap(const int Year);

/* Get numbers of days in month */
int GetDaysInMonth(const int Year, const int Month);

/* Get day of the week */
int GetDayOfTheWeek(CALENDAR cal, UINT day);

/* SetConsoleTextAttributes function */
void SetColor(int color);



/*************************************/
/*****  Definition of functions  *****/
/*************************************/

CALENDAR CreateCalendar(const UINT Year, const UINT Month)
{
	CALENDAR cal;

	cal.year     = Year;
	cal.month    = Month;
	cal.Leap     = DistLeap(Year);
	cal.LastDay  = GetDaysInMonth(Year, Month);
	cal.FirstDay = GetTotalDay(Year, Month) % 7;

	return cal;
}

void ShowCalendar(const CALENDAR cal)
{
	int i;  /* Loop */
	int FirstDay = cal.FirstDay;  /* SUN=0, MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6 */

	printf(" %s, %4d\n\n", strMONTH[cal.month-1], cal.year);
	printf(" SUN MON TUE WED THU FRI SAT\n");

	for ( i = 0 ; i < FirstDay ; i++ )
		printf("    ");

	for ( i = 1 ; i <= GetDaysInMonth(cal.year, cal.month) ; i++ )
	{
		printf("%4d", i);

		if ( ( FirstDay + i ) % 7 == 0 )
			printf("\n");
	}

	printf("\n\n");
}

void ShowColoredCalendar(const CALENDAR cal)
{
	int i;  /* Loop */
	int FirstDay = cal.FirstDay;  /* SUN=0, MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6 */

	printf("  %s, %4d\n\n", strMONTH[cal.month-1], cal.year);
	SetColor(0xFC);
	printf("  SUN");
	SetColor(0xF0);
	printf(" MON TUE WED THU FRI");
	SetColor(0xF9);
	printf(" SAT");
	SetColor(0xF0);
	printf("\n" );

	for ( i = 0 ; i < FirstDay ; i++ )
		printf("    ");

	for ( i = 1 ; i <= GetDaysInMonth(cal.year, cal.month) ; i++ )
	{
		if ( ( FirstDay + i ) % 7 == 1 )
			SetColor(0xFC);
		else if ( ( FirstDay + i ) % 7 == 0 )
			SetColor(0xF9);
		else
			SetColor(0xF0);

		printf("%4d", i);

        SetColor(0xF0);

		if ( ( FirstDay + i ) % 7 == 0 )
			printf("\n");
	}

	printf("\n\n");
}

UINT GetTotalDay(const UINT Year, const UINT Month)
{
	UINT days_of_this_year = 0;
	UINT total_day = 0;

	UINT i;  /* Loop */

	for ( i = 1 ; i < Year ; i++ )
	{
		if ( DistLeap(i) )
			total_day += 366;
		else
			total_day += 365;
	}

	for ( i = 1 ; i < Month ; i++ )
		total_day += GetDaysInMonth(Year, i);

	return total_day + 1;
}

int DistLeap(const int Year)
{
	return ( Year % 400 == 0 )? 1 : ( Year % 100 == 0 )? 0 : ( Year % 4 )? 0 : 1;
}

int GetDaysInMonth(const int Year, const int Month)
{
  if ( Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12 )
    return 31;

  if ( Month == 4 || Month == 6 || Month == 9 || Month == 11 )
    return 30;

  if ( Month == 2 )
	  return DistLeap(Year) ? 29 : 28;

  return 0; // If month is incorrect
}

int GetDayOfTheWeek(CALENDAR cal, UINT day)
{
	return ( cal.FirstDay + (day-1) ) % 7;
}

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}