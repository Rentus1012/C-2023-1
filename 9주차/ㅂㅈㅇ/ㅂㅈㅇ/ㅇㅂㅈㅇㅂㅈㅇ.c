#include <stdio.h>

void main()
{
	int score[10] = { 56, 78, 100, 70, 95, 86, 45, 34, 30, 99 }, i = 0, temp = 0, j = 0, Cnt = 0;

	// 여기에 10명 성적 입력 루틴을 만들기.

	printf("오름차순: 1, 내림차순: 2 => ");
	scanf_s("%d", &Cnt);
	
	if (Cnt == 1)
	{
		for (j = 0; j < (10 - 1); j = j + 1)// 10에서 차근차근 1씩 깎이면서 내려온다.
		{
			for (i = 0; i < (10 - 1 - j); i = i + 1)
			{
				if (score[i] > score[i + 1]) // >은 오름차순, <은 내림차순
				{
					temp = score[i];
					score[i] = score[i + 1];
					score[i + 1] = temp;
				}
			}

		}
	}
	else
	{
		for (j = 0; j < (10 - 1); j = j + 1)// 10에서 차근차근 1씩 깎이면서 내려온다.
		{
			for (i = 0; i < (10 - 1 - j); i = i + 1)
			{
				if (score[i] < score[i + 1]) // >은 오름차순, <은 내림차순
				{
					temp = score[i];
					score[i] = score[i + 1];
					score[i + 1] = temp;
				}
			}

		}
	}
	for (i = 0; i < 10; i = i + 1)
		printf("%d\n", score[i]);

	//풀어서쓰면.
	/*for (i = 0; i < (4 - 1); i = i + 1)
	{
		if (score[i] > score[i + 1])
		{
			temp = score[i];
			score[i] = score[i + 1];
			score[i + 1] = temp;
		}
	}
	for (i = 0; i < (4 - 1 - 1); i = i + 1)
	{
		if (score[i] > score[i + 1])
		{
			temp = score[i];
			score[i] = score[i + 1];
			score[i + 1] = temp;
		}
	}
	for (i = 0; i < (4 - 1 - 1 - 1); i = i + 1)
	{
		if (score[i] > score[i + 1])
		{
			temp = score[i];
			score[i] = score[i + 1];
			score[i + 1] = temp;
		}
	}
	*/
}