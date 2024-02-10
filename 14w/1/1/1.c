#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// word.txt파일의 모든 단어를 메모리로 이동
// 5개를 랜덤하게 출력하여 화면에 출력.
// 5개중 하나를 맞추면 그 하나가 지워지게 해줘.
// 다 없어지면 다시 5개를 화면에 입력.
// 종료를 입력하면 프로그램 종료
// 단어를 맞출때마다 점수, 현재타수, 평균타수 화면 출력.

/*void main()
{
	FILE* fp = fopen("word.txt", "rt");
	if (fp == NULL) return;
	char word[2428][11] = { "" }, gameword[5][11] = { "" }, ans[5][11] = { "" };
	int wordCnt = 0, i = 0, max = 0, len = 0, choice = 0, cor = 5;
	int score = 0, cur = 0, avg = 0;




	printf("--------------------------------------\n");
	printf("한글 단어를 입력하는 프로그램입니다.\n");
	printf("--------------------------------------\n");
	printf("현재점수: %d, 현재타수: %d, 평균타수: %d\n", score, cur, avg);




	while (1)
	{
		fscanf(fp, "%s", word[wordCnt]);
		printf("%s\n", word[wordCnt]);
		wordCnt++;
		if (feof(fp) == 1) break;
	}

	for (i = 0; i < 5; i++)
	{
		choice = rand() % wordCnt;//wordCnt 수 만큼 임의의 수 부여(랜덤)
		strcpy(gameword[i], word[choice]);
		printf("%d\n", choice);// 그 임의의 수에 해당하는 것이 그 단어임.
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
	테스트로 띄우기
	



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
		//printf("%s\n", word[wordCnt]); 단어중에 어떤게 있는지?
		wordCnt++;
	}
	//printf("%d", wordCnt); 이걸 실행시키면 여기 텍스트에 몇 문장이 있냐가 있음.
	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		choice = rand() % wordCnt;//wordCnt 수 만큼 임의의 수 부여(랜덤)
		strcpy(gameword[i], word[choice]);
		//printf("%d\n", choice);// 그 임의의 수에 해당하는 것이 그 단어임.
	}

	int cor = 5, score = 0, avg = 0, cur = 0, st = 0, et = 0;
	//st: start time, et: end time
	//cor: 맞은 개수


	while (1)
	{
		system("cls");
		printf("------------------------------------------------------------------------\n");
		printf("한글 단어 연습 프로그램 입니다.\n");
		printf("종료 하실려면 '종료'를 입력해주세요.\n");
		printf("------------------------------------------------------------------------\n");
		printf("현재점수: %d, 현재 타수: %d, 평균타수: %d\n", score, cur, avg);
		printf("------------------------------------------------------------------------\n");

		for (i = 0; i < 5; i++)
		{
			printf("%s ", gameword[i]);
		}
		printf("%d/5\n", cor);
		st = time(NULL);
		gets(ans); //입력하고 싶은 문자 입력하는 칸
		et = time(NULL);
		printf("%d초가 걸렸습니다.\n", et - st);
		Sleep(1000);
		len = strlen(ans);
		total_t = total_t + (et - st); // 평균 타자 구할려고 누적시키는거
		total_len = total_len + len;//평균 타자 구할려고 누적.
		
		cur = (len * 60) / (et - st);
		avg = (total_len * 60) / total_len; //계속 타수를 누적시키는거임.

		if (strcmp(ans, "종료") == 0)
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
				flag++; // 한개 맞을때마다 flag에 1을 더함.
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