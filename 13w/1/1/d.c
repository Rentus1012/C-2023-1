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
			max = len; // �ִ밪.
		}
		printf("%s", str);
		printf("\n�ܾ� ����: %d, Ƚ��: %d, �ִ� ����: %d\n\n", len, strCnt, max);
		*/
		fgets(&wordDB[strCnt][0], sizeof(wordDB[strCnt]), fp);
		
		len = strlen(wordDB[strCnt]);
		
		wordDB[strCnt][len - 1] = '\0'; // fgets�� ����Ű���� �Է¹���. ������ �׳� gets�� ����Ű �Է��� �ȹ���.
		// �ϳ��� �������.
		if (len > max)
		{
			max = len; // �ִ밪.
		}
		
		//printf("%s", wordDB);
		//printf("\n�ܾ� ����: %d, Ƚ��: %d, �ִ� ����: %d\n\n", len, strCnt, max);
		strCnt++;

		
		printf("����: %d, ���� Ÿ��: %d, ��� Ÿ��: %d\n", score, cur, avg);
		printf("���õ� ����: %s\n", wordDB[choice]);
		

		start_time = time(NULL);
		gets(&ans[0]);
		end_time = time(NULL);



		total_time = total_time + (end_time - start_time);
		total_len = total_len + len;
		

		printf("time is %d, len is %d\n", end_time - start_time, len);
		Sleep(1000);

		if (strcmp(ans, "����") == 0)
			break;

		if (strcmp(ans, wordDB[choice]) == 0)
		{
			printf("�����Դϴ�.\n");
			srand(time(NULL));
			choice = rand() % strCnt;
			score = score + 10;
		}
		else
		{
			printf("�����Դϴ�.\n");
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

	printf("���õ� ����: %s\n", wordDB[choice]);
	gets(&ans[0]);
	
	if (strcmp(ans, wordDB[choice]) == 0)
		printf("�����Դϴ�.");
	else
		printf("�����Դϴ�.");
	*/

}