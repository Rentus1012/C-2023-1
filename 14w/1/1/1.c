#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// word.txt������ ��� �ܾ �޸𸮷� �̵�
// 5���� �����ϰ� ����Ͽ� ȭ�鿡 ���.
// 5���� �ϳ��� ���߸� �� �ϳ��� �������� ����.
// �� �������� �ٽ� 5���� ȭ�鿡 �Է�.
// ���Ḧ �Է��ϸ� ���α׷� ����
// �ܾ ���⶧���� ����, ����Ÿ��, ���Ÿ�� ȭ�� ���.

/*void main()
{
	FILE* fp = fopen("word.txt", "rt");
	if (fp == NULL) return;
	char word[2428][11] = { "" }, gameword[5][11] = { "" }, ans[5][11] = { "" };
	int wordCnt = 0, i = 0, max = 0, len = 0, choice = 0, cor = 5;
	int score = 0, cur = 0, avg = 0;




	printf("--------------------------------------\n");
	printf("�ѱ� �ܾ �Է��ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------\n");
	printf("��������: %d, ����Ÿ��: %d, ���Ÿ��: %d\n", score, cur, avg);




	while (1)
	{
		fscanf(fp, "%s", word[wordCnt]);
		printf("%s\n", word[wordCnt]);
		wordCnt++;
		if (feof(fp) == 1) break;
	}

	for (i = 0; i < 5; i++)
	{
		choice = rand() % wordCnt;//wordCnt �� ��ŭ ������ �� �ο�(����)
		strcpy(gameword[i], word[choice]);
		printf("%d\n", choice);// �� ������ ���� �ش��ϴ� ���� �� �ܾ���.
	}
	while (1)
	{
		for (i = 0; i < 5; i++)
		{
			printf("%s 5", gameword[i]);
		}
		gets(ans);
		for (i = 0; i < 5; i++)
		{
			if (strcmp(ans, gameword[i]) == 0)
			{
				strcpy(gameword[i], "");
				cor = cor - 1;
			}
		}
		if (cor == 0)
		{
			for (i = 0; i < 5; i++)
			{
				choice = rand() % wordCnt;
				strcpy(gameword[i], word[choice]);
			}
		}
	}

	/*for (i = 0; i < 5; i++)
	{
		choice[i] = rand() % wordCnt;
		printf("choice[%d] is %s\n", i, word[choice[i]]);
	}
	�׽�Ʈ�� ����
	



	//printf("wordCnt: %d\n", wordCnt);
	
}*/



void main()
{
	FILE* fp = fopen("word.txt", "rt");
	char word[2428][11] = { "" }, gameword[5][11] = { "" }, ans[256] = "";
	int wordCnt = 0, i, max = 0, len = 0, choice = 0, total_t = 0, total_len = 0;



	while (1)
	{
		fscanf(fp, "%s", word[wordCnt]);
		if (feof(fp) == 1) break;
		//printf("%s\n", word[wordCnt]); �ܾ��߿� ��� �ִ���?
		wordCnt++;
	}
	//printf("%d", wordCnt); �̰� �����Ű�� ���� �ؽ�Ʈ�� �� ������ �ֳİ� ����.
	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		choice = rand() % wordCnt;//wordCnt �� ��ŭ ������ �� �ο�(����)
		strcpy(gameword[i], word[choice]);
		//printf("%d\n", choice);// �� ������ ���� �ش��ϴ� ���� �� �ܾ���.
	}

	int cor = 5, score = 0, avg = 0, cur = 0, st = 0, et = 0;
	//st: start time, et: end time
	//cor: ���� ����


	while (1)
	{
		system("cls");
		printf("------------------------------------------------------------------------\n");
		printf("�ѱ� �ܾ� ���� ���α׷� �Դϴ�.\n");
		printf("���� �ϽǷ��� '����'�� �Է����ּ���.\n");
		printf("------------------------------------------------------------------------\n");
		printf("��������: %d, ���� Ÿ��: %d, ���Ÿ��: %d\n", score, cur, avg);
		printf("------------------------------------------------------------------------\n");

		for (i = 0; i < 5; i++)
		{
			printf("%s ", gameword[i]);
		}
		printf("%d/5\n", cor);
		st = time(NULL);
		gets(ans); //�Է��ϰ� ���� ���� �Է��ϴ� ĭ
		et = time(NULL);
		printf("%d�ʰ� �ɷȽ��ϴ�.\n", et - st);
		Sleep(1000);
		len = strlen(ans);
		total_t = total_t + (et - st); // ��� Ÿ�� ���ҷ��� ������Ű�°�
		total_len = total_len + len;//��� Ÿ�� ���ҷ��� ����.
		
		cur = (len * 60) / (et - st);
		avg = (total_len * 60) / total_len; //��� Ÿ���� ������Ű�°���.

		if (strcmp(ans, "����") == 0)
		{
			break;
		}
		int flag = 0;

		for (i = 0; i < 5; i++)
		{
			if (strcmp(ans, gameword[i]) == 0)
			{
				strcpy(gameword[i], "");
				cor = cor - 1;
				flag++; // �Ѱ� ���������� flag�� 1�� ����.
			}
		}
		

		if (cor == 0)
		{
			cor = 5;
			for (i = 0; i < 5; i++)
			{
				choice = rand() % wordCnt;
				strcpy(gameword[i], word[choice]);
			}
			if (flag == 1) score = score + 5;
			if (flag == 0) score = score - 1;
		}
	}
}