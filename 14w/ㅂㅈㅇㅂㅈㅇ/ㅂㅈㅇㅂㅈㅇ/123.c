#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void main()
{
	int i = 0, s = 0, m = 0, h = 0, day = 0, month = 0, year = 0;//년, 월, 일, 시, 분, 초, i

	printf("년, 월, 일, 시, 분, 초를 입력하세요.\n");
	scanf("%d %d %d %d %d %d", &year, &month, &day, &h, &m, &s);

	system("cls");// 전부 다 지우고 시작.

	while (1)
	{
		s++;
		if (s == 60)
		{
			m++;
			s = 0;
		}
		if (m == 60)
		{
			m = 0;
			h++;
		}
		if (h == 12)
		{
			h = 1;
			day++;
		}
		
		if (month == 1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if (day == 32)
			{
				day = 1;
				month++;
			}
		
		if (month == 4 || month == 6 || month == 9 || month ==11)
			if (day == 31)
			{
				day = 1;
				month++;
			}
		
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				if (day == 30)
				{
					day = 1;
					month++;
				}
			}
			else
			{
				if (day == 29)
				{
					day = 1;
					month++;
				}
			}
		}
		
		if (month == 13)
		{
			year++;
			month = 1;

		}
		printf("%2d:%2d:%2d %2d:%2d:%2d\r", year, month, day, h, m, s);
		Sleep(1000);



	}


}

