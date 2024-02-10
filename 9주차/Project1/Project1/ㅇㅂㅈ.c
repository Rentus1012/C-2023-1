#include <stdio.h>

void main()
{
	int hour = 0, min = 0, sec = 0, curtime = 0;
	int ahour = 0, amin = 0, asec = 0, altime = 0;
	int rhour = 0, rmin = 0, rsec = 0, retime = 0;


	printf("시간, 분, 초 를 입력하세요: ");
	scanf_s("%02d %02d %02d", &hour, &min, &sec);

	printf("알람을 맞출 시간, 분, 초 를 입력하세요: ");
	scanf_s("%02d %02d %02d", &ahour, &amin, &asec);



	while (1)
	{
		sec = sec + 1;
		if (sec == 60)
		{
			min = min + 1;
			sec = 0;
		}

		if (min == 60)
		{
			hour = hour + 1;
			min = 0;
		}
		curtime = hour * 3600 + min * 60 + sec;
		altime = ahour * 3600 + amin * 60 + asec;
		retime = altime - curtime;

		if (altime == retime == 0)
		{
			printf("\a");
			rhour = rmin = rsec = 0;
		}
		else
		{
			rhour = retime / 3600; rmin = (retime % 3600) / 60; rsec = (retime % 3600) % 60;
		}
		printf("현재시간: %02d:%02d:%02d, 알람시간:%02d:%02d:%02d, 남은시간: %02d:%02d:%02d \r", hour, min, sec, ahour, amin, asec, rhour, rmin, rsec);
		Sleep(1000);
	}




}