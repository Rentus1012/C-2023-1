#include <stdio.h>

void main()
{
	int score[10] = { 56, 78, 100, 70, 95, 86, 45, 34, 30, 99 }, i = 0, temp = 0, j = 0, Cnt = 0;

	// ���⿡ 10�� ���� �Է� ��ƾ�� �����.

	printf("��������: 1, ��������: 2 => ");
	scanf_s("%d", &Cnt);
	
	if (Cnt == 1)
	{
		for (j = 0; j < (10 - 1); j = j + 1)// 10���� �������� 1�� ���̸鼭 �����´�.
		{
			for (i = 0; i < (10 - 1 - j); i = i + 1)
			{
				if (score[i] > score[i + 1]) // >�� ��������, <�� ��������
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
		for (j = 0; j < (10 - 1); j = j + 1)// 10���� �������� 1�� ���̸鼭 �����´�.
		{
			for (i = 0; i < (10 - 1 - j); i = i + 1)
			{
				if (score[i] < score[i + 1]) // >�� ��������, <�� ��������
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

	//Ǯ�����.
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