#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*int main()
{
	int count = 0, score = 0;
	char word[2500][20];
	char word1[20], end[10] = "����", word_input[20], name[10];
	float sum = 0.0, acr = 0.0, cnt = 0.0;

	//FILE* fp = fopen("WORD.txt", "r");
	FILE* fp = fopen("C���.txt", "r");
	FILE* fp1 = fopen("��ŷ.txt", "a");
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
		srand(time(NULL)); // �������� �ϳ��� �̾ƿ��°���.
		strcpy(word1, word[rand() % 2424]);
		cnt++;
		printf("���� �Է½� ����\n\n");
		printf("%s\n", word1);
		printf("�ܾ �Է��ϼ��� : ");
		scanf("%s", word_input);

		if (strcmp(end, word_input) == 0)
		{
			system("cls");
			printf("�̸��� �Է��ϼ���: ");
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
			printf("��Ÿ�Դϴ�. \n");
			Sleep(1000);
			system("cls");
		}


		//printf("����: %s\n", word1);

		sum = (acr / cnt) * 100;
		printf("����: %d\n", score);
		printf("��Ȯ��: %.1f\n", sum);
	}
}
*/
//fopen() : ���� ����
//fclose() :���� �ݱ�
//fscanf() : ���� ��ĵ(�ؽ�Ʈ ����)
//fprintf() : ���� ����(�ؽ�Ʈ ����)
//fread() : ���� �б�(���Ͽ��� ����Ʈ ������ ������.(0,1 �Ǵ� ���α׷�����))
//fwrite(): ���� ����(���Ͽ��� ����Ʈ ������ ����.(0,1 �Ǵ� ���α׷�����))
//feof() :������ ��, (EOF�̸� 1(Ture)��, �ƴϸ� 0(False)��)


// #define _CRT_SECURE_NO_WARNINGS �̰� ���� _s �� �ʿ� ����.


void main()
{
	char fname[256] = "", word[7657][17] = { "" }, sname[256] = "", data = 0, temp[17] = "";
	int count = 0, len = 0, max = 0;

	//gets(&fname[0]);
	//gets(sname);

	FILE* fp = fopen("WORD.txt", "rt");
	FILE* fp_out = fopen("SORT.txt", "wt");// rt: read text ��� 
	//wt�� �ִ�. rb,wb�� �������Ͽ��� �о�帱��.(��� ���α׷�)

	if (fp == NULL)//���� ������ �������� �ʴٸ�?
	{
		printf("������ �������� �ʽ��ϴ�...\n");
		return;
	}

	/*while (1)//���� �ٿ��ֱ�
	{
		fread(&data, sizeof(char), 1, fp);
		printf("%d \n", data);
		getch();
		if (feof(fp))
			break;
		fwrite(&data, sizeof(char), 1, fp_out);
	}
	*/

	while (1)
	{
		fscanf(fp, "%s", &word[count][0]);
		count++;
		if (feof(fp))
			break;

	}
	for (int j = 0; j < count - 1; j++)
	{
		for (int i = 0; i < count - 1 - j; i++)
		{
			if (strcmp(word[i], word[i+1])> 0)
			{
				strcpy(temp, word[i]);
				strcpy(word[i], word[i+1]);
				strcpy(word[i+1], temp);
			}
		}
	}
	for (int i = 0; i < count; i = i + 1)
	{
		fprintf(fp_out, "%d:%s\n", i, word[i]);
	}

	fclose(fp); fclose(fp_out);
}