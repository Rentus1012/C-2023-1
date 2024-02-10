#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*int main()
{
	int count = 0, score = 0;
	char word[2500][20];
	char word1[20], end[10] = "종료", word_input[20], name[10];
	float sum = 0.0, acr = 0.0, cnt = 0.0;

	//FILE* fp = fopen("WORD.txt", "r");
	FILE* fp = fopen("C언어.txt", "r");
	FILE* fp1 = fopen("랭킹.txt", "a");
	while (!feof(fp))
	{
		fscanf(fp, "%s", word[count]);
		printf("%s\n", word[count]);
		count++;

	}
	printf("%d\n", count);
	system("cls");

	while (1)
	{
		srand(time(NULL)); // 랜덤으로 하나씩 뽑아오는거임.
		strcpy(word1, word[rand() % 2424]);
		cnt++;
		printf("종료 입력시 종료\n\n");
		printf("%s\n", word1);
		printf("단어를 입력하세요 : ");
		scanf("%s", word_input);

		if (strcmp(end, word_input) == 0)
		{
			system("cls");
			printf("이름을 입력하세요: ");
			scanf("%s", name);
			fprintf(fp1, "%s %d %.1f\n", name, score, sum);
			return 0;
		}

		if (strcmp(word1, word_input) == 0)
		{
			score = score + 10;
			acr++;
			system("cls");
		}
		if (strcmp(word1, word_input) != 0)
		{
			printf("오타입니다. \n");
			Sleep(1000);
			system("cls");
		}


		//printf("랜덤: %s\n", word1);

		sum = (acr / cnt) * 100;
		printf("점수: %d\n", score);
		printf("정확도: %.1f\n", sum);
	}
}
*/
//fopen() : 파일 열기
//fclose() :파일 닫기
//fscanf() : 파일 스캔(텍스트 파일)
//fprintf() : 파일 적기(텍스트 파일)
//fread() : 파일 읽기(파일에서 바이트 단위로 읽을때.(0,1 또는 프로그램에서))
//fwrite(): 파일 쓰기(파일에서 바이트 단위로 쓸때.(0,1 또는 프로그램에서))
//feof() :파일의 끝, (EOF이면 1(Ture)을, 아니면 0(False)을)


// #define _CRT_SECURE_NO_WARNINGS 이거 쓰면 _s 쓸 필요 없음.

 
void main()
{
	char fname[256] = "", word[256] = "", sname[256] = "";
	int count = 0, len = 0, max = 0;

	gets(&fname[0]);
	gets(sname);

	FILE* fp = fopen(fname, "rt");
	FILE* fp_out = fopen("result.txt", "wt");// rt: read text 모드 
	//wt도 있다. rb,wb는 실행파일에서 읽어드릴때.(상용 프로그램)

	if (fp == NULL)
	{
		printf("파일이 존재하지 않습니다...\n");
		return;
	}

	while (1)
	{
		fscanf(fp, "%s", word);
		len = strlen(word);
		printf("word is %s\n", &word[0]);
		fprintf(fp_out, "%d: %s %d\n", count, &word[0], len);
		count++;
		

		
		if (len > max)
			max = len;
		if (feof(fp))
			break;
		
	}
	printf("count is %d, max is %d", count, max);
}