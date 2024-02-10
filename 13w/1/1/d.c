#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	char wordDB[1261][77] = { "" };
	char str[256] = "", ans[256] = "";
	int strCnt = 0, max = 0, len = 0, choice = 0, score = 0, cur = 0, avg = 0;
	unsigned int start_time = 0, end_time = 0, total_time = 0, total_len = 0;
	FILE* fp = fopen("WORD.txt", "rt");
	
	
	

	while (1)
	{
		/*fgets(&str[0], sizeof(str), fp);
		strCnt++;
		len = strlen(str);
		if (len > max)
		{
			max = len; // 최대값.
		}
		printf("%s", str);
		printf("\n단어 길이: %d, 횟수: %d, 최대 길이: %d\n\n", len, strCnt, max);
		*/
		fgets(&wordDB[strCnt][0], sizeof(wordDB[strCnt]), fp);
		
		len = strlen(wordDB[strCnt]);
		
		wordDB[strCnt][len - 1] = '\0'; // fgets는 엔터키까지 입력받음. 하지만 그냥 gets는 엔터키 입력을 안받음.
		// 하나를 배줘야함.
		if (len > max)
		{
			max = len; // 최대값.
		}
		
		//printf("%s", wordDB);
		//printf("\n단어 길이: %d, 횟수: %d, 최대 길이: %d\n\n", len, strCnt, max);
		strCnt++;

		
		printf("점수: %d, 현재 타수: %d, 평균 타수: %d\n", score, cur, avg);
		printf("선택된 문장: %s\n", wordDB[choice]);
		

		start_time = time(NULL);
		gets(&ans[0]);
		end_time = time(NULL);



		total_time = total_time + (end_time - start_time);
		total_len = total_len + len;
		

		printf("time is %d, len is %d\n", end_time - start_time, len);
		Sleep(1000);

		if (strcmp(ans, "종료") == 0)
			break;

		if (strcmp(ans, wordDB[choice]) == 0)
		{
			printf("정답입니다.\n");
			srand(time(NULL));
			choice = rand() % strCnt;
			score = score + 10;
		}
		else
		{
			printf("오답입니다.\n");
			score = score - 5;
		}
		if (feof(fp))
			break;

		
	}
	
	/*for (int i = 0; i < strCnt; i++)
	{
		printf("%s", wordDB[i]);
	}
	*/
	/*srand(time(NULL));
	choice = rand() % strCnt;

	printf("선택된 문장: %s\n", wordDB[choice]);
	gets(&ans[0]);
	
	if (strcmp(ans, wordDB[choice]) == 0)
		printf("정답입니다.");
	else
		printf("오답입니다.");
	*/

}