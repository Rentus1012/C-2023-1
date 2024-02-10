#include <stdio.h>

void main()
{
	int score[11] = { 0 }, sum = 0, i = 0, j = 0, temp = 0 , Cnt = 0, A = 0, B = 0, C = 0, D = 0, E = 0, Tot = 0;
	double avg = 0;
	printf("10명의 성적을 입력하세요.\n");


	for (i = 1; i <= 10; i = i + 1)
	{
		printf("%d번째 사람의 성적을 입력하시오: \n", i);
		scanf_s("%d", &score[i]);
	}
	 
	printf("오름차순: 1, 내림차순: 2 >> ");
	scanf_s("%d", &Cnt);

	if (Cnt == 1)
	{
		for (j = 0; j < (10 - 1); j = j + 1)// 10에서 차근차근 1씩 깎이면서 내려온다.
		{
			for (i = 1; i < (11 - 1 - j); i = i + 1)
			{
				if (score[i] > score[i + 1]) // >은 오름차순
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
			for (i = 1; i < (11 - 1 - j); i = i + 1)
			{
				if (score[i] < score[i + 1]) //<은 내림차순
				{
					temp = score[i];
					score[i] = score[i + 1];
					score[i + 1] = temp;
				}
			}

		}
	}
	for (i = 1; i <= 10; i = i + 1)
		printf("%d\n", score[i]);

	A = score[1] + score[2];
	B = score[3] + score[4];
	C = score[5] + score[6];
	D = score[7] + score[8];
	E = score[9] + score[10];

	Tot = A + B + C + D + E;
	avg = (double)Tot / 10;

	printf("총합은 %d 입니다.\n", Tot);
	printf("평균은 %lf 입니다.\n", avg); // double은 lf로 받음.

}