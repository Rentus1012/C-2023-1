#include <stdio.h>

void main()
{
	int score[11] = { 0 }, sum = 0, i = 0, j = 0, temp = 0 , Cnt = 0, A = 0, B = 0, C = 0, D = 0, E = 0, Tot = 0;
	double avg = 0;
	printf("10���� ������ �Է��ϼ���.\n");


	for (i = 1; i <= 10; i = i + 1)
	{
		printf("%d��° ����� ������ �Է��Ͻÿ�: \n", i);
		scanf_s("%d", &score[i]);
	}
	 
	printf("��������: 1, ��������: 2 >> ");
	scanf_s("%d", &Cnt);

	if (Cnt == 1)
	{
		for (j = 0; j < (10 - 1); j = j + 1)// 10���� �������� 1�� ���̸鼭 �����´�.
		{
			for (i = 1; i < (11 - 1 - j); i = i + 1)
			{
				if (score[i] > score[i + 1]) // >�� ��������
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
			for (i = 1; i < (11 - 1 - j); i = i + 1)
			{
				if (score[i] < score[i + 1]) //<�� ��������
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

	printf("������ %d �Դϴ�.\n", Tot);
	printf("����� %lf �Դϴ�.\n", avg); // double�� lf�� ����.

}