#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int menu()
{
	int n = 0;


	printf("-----------------------------------------------------------\n");
	printf("�� ���α׷��� ���� ���� ���α׷��� ����Դϴ�.\n");
	Sleep(500);
	printf("�����ϰ� ���� ���α׷��� �Է��ϼ���.\n");
	Sleep(1000);
	printf("���α׷��� �����ϽǷ��� 0���� �Է����ּ���.\n");
	Sleep(1000);
	printf("-----------------------------------------------------------\n");
	printf("1. 1���� 100������ ��(¦��, Ȧ��, �Ҽ� ����)\n");
	printf("2. 2���� �Է��ؼ� �װ��� �ִ�����, �ּҰ���� ���ϱ�.\n");
	printf("3. ��, ��, �ʸ� �Է��ؼ� �ð� ����.\n");
	printf("4. ���� �Է��ϰ� ¦��, Ȧ�� ī���� �ϴ� ���α׷�.\n");
	printf("5. ȸ������ �ƴ��� �Ǵ��ϴ� ���α׷�\n");
	printf("6. �� �ܾ ������ �ƴ��� ����ϴ� ���α׷�.\n");
	printf("7. �߱����� ���α׷�.\n");
	printf("8. 10���� ������ �Է��ؼ� ����, ��� �Է�.\n");
	printf("9. �θ��� �̸��� �Է��ϰ� �Ȱ����� �ƴ��� ����ϴ� ���α׷�.\n");
	printf("10. 10���� ����� �Է��ϰ� ����.\n");
	printf("11. 10���� ����� �Է��ϰ� ��������, �������� ����\n");
	printf("12. txt���Ͽ� �ִ� ������ ���̿� ���� �� ����, ���° �������� ���.\n");
	printf("13. txt ������ �ܾ ���ʴ�� ����.\n");
	printf("14. ��ȣȭ/��ȣȭ ���α׷� �����\n");
	printf("15. ���� ������ �Է��ϴ� ���α׷�(����Ÿ�� ���� ���α׷�)\n");
	printf("16. ������ ����ؿ�\n"); //��������������������
	printf("-----------------------------------------------------------\n");
	printf("���⿡ �Է� --> ");

	scanf("%d", &n);
	getchar();
	return n;
}
//�޴�
void num()
{
	int no = 0, sum = 0, i = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("1���� 100 ������ ���� ���ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	printf("���� �׸��� ������.\n");
	printf("--------------------------------------------\n");
	printf("1. 1���� 100������ ���� ��\n");
	printf("2. 1���� 100������ ¦�� ��\n");
	printf("3. 1���� 100������ Ȧ�� ��\n");
	printf("4. 1���� 100������ �Ҽ��� ���� �ִ���??\n");
	printf("--------------------------------------------\n");
	printf("�� �Է�: ");
	scanf("%d", &no);

	if (no == 1)
	{
		system("cls");
		printf("��ø� ��ٷ��ּ���. ������Դϴ�.");
		Sleep(1500);
		for (i = 0; i <= 100; i++)
		{
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1���� 100������ ������ ���� %d �Դϴ�.\n", sum);
	}
	if (no == 2)
	{
		system("cls");
		for (i = 2; i <= 100; i = i + 2)
		{
			printf("��ø� ��ٷ��ּ���. ������Դϴ�.");
			Sleep(1500);
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1���� 100������ ¦���� ���� %d �Դϴ�.\n", sum);
	}
	if (no == 3)
	{
		system("cls");
		for (i = 1; i <= 100; i = i + 2)
		{
			printf("��ø� ��ٷ��ּ���. ������Դϴ�.");
			Sleep(1500);
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1���� 100������ Ȧ���� ���� %d �Դϴ�.\n", sum);
	}
	if (no == 4)
	{
		system("cls");
		for (i = 2; i <= 100; i = i + 1)
		{
			printf("��ø� ��ٷ��ּ���. ������Դϴ�.");
			Sleep(1500);
			printf("---------------------------------------------\n");
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			{
				printf("�Ҽ��� %d �Դϴ�.", sum);
			}
		}
	}
} //1
//1
void gcm_icd()
{
	int num1 = 0, num2 = 0, i = 0, temp = 0, gcd = 0, lcm = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("�μ��� �ּҰ����, �ִ������� ���ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


	printf("�ΰ��� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	//printf("ù��° ����: %d, �ι�° ����: %d\n", num1, num2);

	for (i = 0; i <= num1; i = i + 1)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	lcm = num1 * num2 / gcd;
	printf("�ִ�����: %d, �ּҰ����: %d\m", gcd, lcm);

}
//2
void c()
{
	int num = 0, i = 0, h = 0, m = 0, s = 0;


	system("cls");
	printf("--------------------------------------------\n");
	printf("��, ��, �ʸ� �޾� �ð踦 ����ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


	printf("��, ��, �ʸ� �Է��ϼ���.\n");
	scanf("%d %d %d", &h, &m, &s);

	system("cls");

	for (; 1; )
	{
		s = s + 1;
		if (s == 60)
		{
			m = m + 1;
			m = 0;
		}
		if (m == 60)
		{
			h = h + 1;
			m = 0;
		}
		if (h == 24)
		{
			h = 0;
		}
	}
	printf("%02d:%02d:%02d", h, m, s);
	Sleep(1000);
}
//3
void even_odd_Cnt()
{
	int num = 0, oddCnt = 0, evenCnt = 0, primeCnt = 0, i = 0, flag = 0;

	while (1)
	{
		system("cls");
		printf("--------------------------------------------\n");
		printf("�ϳ��� ������ ��¹޾� ¦�� Ƚ��, Ȧ�� Ƚ��, �Ҽ� Ƚ���� ���ϴ� ���α׷��Դϴ�.\n");
		printf("--------------------------------------------\n");
		Sleep(1500);
		printf("���� �Է�: ");
		scanf("%d", &num);

		if (num <= 0)
			break;

		if (num % 2 == 0)
			evenCnt = evenCnt + 1;
		else
			oddCnt = oddCnt + 1;

		for (i = 1; i <= num; i++)
		{
			if (num % i == 0)
				flag++;
		}
		if (flag == 2)
			primeCnt++;
		flag = 0;
		printf("¦�� Ƚ��: %d, Ȧ�� Ƚ��: %d, �Ҽ� Ƚ��: %d\n", evenCnt, oddCnt, primeCnt);
	}
}
//4
void Pal()
{
	char word[20] = "", i = 0, wordCnt = 0, flag = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("ȸ������ �ƴ����� �Ǵ��ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);
	printf("�ܾ� �Է�: ");
	scanf("%s", &word[0]);

	printf("�Է��� �ܾ�� %s �Դϴ�.\n", &word[0]);


	for (i = 0; i <= 19; i++)
	{
		if (word[i] == '\0')
			break;
		wordCnt++;

	}
	printf("�ܾ��� ����: %d", wordCnt);

	for (i = 0; i < (wordCnt / 2); i++)
	{
		if (word[i] == word[wordCnt - 1 - i])
			flag++;
		if (word[i] == word[wordCnt / 2])
			break;
	}
	if (flag == wordCnt / 2)
		printf("%s�� ȸ���Դϴ�.");
	else
		printf("%s�� ȸ���� �ƴմϴ�.\n", word[0]);
}
//5
void equal()
{
	char word1[20] = "", word2[20] = "", i = 0, wordCnt = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("�δܾ ������ �ƴ��� ���ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);
	printf("ù��° �ܾ� �Է�: ");
	scanf("%s", &word1[0]);
	printf("�ι�° �ܾ� �Է�: ");
	scanf("%s", &word2[0]);

	printf("ù��° �ܾ�: %s, �ι�° �ܾ�: %s", &word1[0], &word2[0]);


	for (i = 0; i < 20; i++)
	{
		if (word1[i] - word2[i] != 0)
			printf("�� �ܾ�� ���� �ٸ��ϴ�.");
		break;
	}

	for (i = 0; i < 20; i++)
	{
		if (word1[i] == word2[i])
			wordCnt++;

	}
	if (wordCnt == i)
		printf("�� �ܾ�� �����ϴ�.");

}
//6
void baseball()
{
	char com[3] = { 0 }, usr[3] = { 0 }, i = 0, t = 0, limit = 9, stCnt = 0, ballCnt = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("�߱����� ���α׷��Դϴ�.\n");
	Sleep(1000);
	printf("��ǻ�Ͱ� ������ ���ڸ� ������Դϴ�.");
	Sleep(500);
	printf("--------------------------------------------\n");
	Sleep(1500);


	srand(time(NULL));
	while(1)
	{
		for (i = 0; i < 3; i++)
		{
			com[i] = (rand() % limit) + 1;
			printf("com[%d] is %d\n", i, com[i]);
		}
		if (com[0] == com[1] || com[0] == com[2] || com[1] == com[2])
			continue;
		else
			break;
	}
	printf("������ ���ڰ� ��µǾ����ϴ�.\n");

	while (1)
	{
		for (i = 0; i < 3; i++)
		{
			printf("usr[%d]: %d\n", i);
			scanf("%d", &usr[i]);
		}
		if (usr[0] == usr[1] || usr[0] == usr[2] || usr[1] == usr[2])
		{
			printf("�ߺ��� ���ڴ� ������ �����ų�� �����ϴ�. �ٽ� �Է��ϼ���.\n");
			continue;
		}
		else
			break;
	}
	if (usr[0] == com[0])
		stCnt++;
	if (usr[1] == com[1])
		stCnt++;
	if (usr[2] == com[2])
		stCnt++;
	printf("��Ʈ����ũ Ƚ���� %d�� �Դϴ�.\n", stCnt);

	if (com[0] == usr[1])
		ballCnt++;
	if (com[0] == usr[2])
		ballCnt++;
	if (com[1] == usr[0])
		ballCnt++;
	if (com[1] == usr[2])
		ballCnt++;
	if (com[2] == usr[1])
		ballCnt++;
	if (com[2] == usr[0])
		ballCnt++;
	printf("�� Ƚ���� %d �� �Դϴ�.\n", ballCnt);

}
//7
void grade()
{
	int score[11] = { 0 }, sum = 0, i = 0, j = 0, temp = 0, Cnt = 0, A = 0, B = 0, C = 0, D = 0, E = 0, Tot = 0;
	
	system("cls");
	printf("--------------------------------------------\n");
	printf("���� ���� ���α׷��Դϴ�.\n");
	Sleep(1000);
	printf("--------------------------------------------\n");
	Sleep(1500);
	
	double avg = 0;
	printf("10���� ������ �Է��ϼ���.\n");
	printf("--------------------------------------------\n");

	for (i = 1; i <= 10; i = i + 1)
	{
		printf("%d��° ����� ������ �Է��Ͻÿ�: \n", i);
		scanf("%d", &score[i]);
	}

	printf("��������: 1, ��������: 2 >> ");
	scanf("%d", &Cnt);

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
//8
void name_equal()
{
	char name[2][10] = { "" }, temp[10] = "";
	int result = 0, len1 = 0, len2 = 0;
	// name[10] = ""�� �ѻ���� �̸��� �����Ҽ� ����.
	// name[2][10] = "" �� 2���.

	system("cls");
	printf("--------------------------------------------\n");
	printf("�θ��� �̸��� �Է��ϰ� �Ȱ����� �ƴ��� ����ϴ� ���α׷� �Դϴ�.\n");
	Sleep(1000);
	printf("--------------------------------------------\n");
	Sleep(500);

	printf("ù��° ����� �̸��� �Է��ϼ���: ");
	gets(&name[0][0]);//name[0]
	printf("�ι�° ����� �̸��� �Է��ϼ���: ");
	gets(&name[1][0]); //name[1]
	//gets_s(&name[0][0],sizeof(name[0]));
	//gets_s(&name[0][0],10);
	// �̷��� �ΰ��� �ᵵ ��(������ ����)


	result = strcmp(name[0], name[1]); // ������ �ƴ��� ����(?)
	len1 = strlen(name[0]);
	len2 = strlen(name[1]);
	if (result == 0)
	{
		printf("�� ����� �̸��� �����ϴ�.\n");
	}
	else
	{
		if (result > 0)
		{
			strcpy(temp, name[0]); // �����ϴ°���.
			strcpy(name[0], name[1]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
			strcpy(name[1], temp); // strcpy�� �ϴ°���.
			printf("�� ����� �̸��� ���� �ʽ��ϴ�.\n");
		}
		else
		{
			strcpy(temp, name[1]); // �����ϴ°���.

			strcpy(name[1], name[0]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
			strcpy(name[0], temp); // strcpy�� �ϴ°���.
			printf("�� ����� �̸��� ���� �ʽ��ϴ�.\n");
		}
	}


	printf("ù��° �̸�:%s ,�ι�° �̸�:%s\n", &name[0][0], &name[1][0]);
	printf("ù��° ����� �̸� ����:%d \n �ι�° ����� �̸� ����:%d \n", len1, len2);
	//&name[0][0], &name[1][0] ��� name[0], name[1] �̷��� �ᵵ ��� X
}
//9
void sort()
{
	char name[10][10] = { "" }, i = 0, temp[10] = "", j = 0;
	//10���ڸ� 2����� �Է��Ҽ� �ִ� ĭ�� �����޶�.
	//�ѻ������ 10ĭ�� �Է��Ҽ� �ְ� ����.
	system("cls");
	printf("--------------------------------------------\n");
	printf("10���� �̸��� �Է��ϰ� �����ϴ� ���α׷� �Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d��° ����� �̸��� �Է��ϼ���: ", i);
		gets(&name[i][0]); // ������ �����ֱ�
	}


	for (j = 0; j < 10 - 1; j = j + 1)//���� ��Ʈ
	{
		for (i = 0; i < 10 - 1 - j; i = i + 1)//����
		{
			if (strcmp(name[i], name[i + 1]) == 1)
			{
				strcpy(temp, name[i]); // �����ϴ°���.
				strcpy(name[i], name[i + 1]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
				strcpy(name[i + 1], temp); // strcpy�� �ϴ°���.
			}
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d ��° �̸� : %s \n", i, &name[i][0]);
	}
}
//10
void ten_sort()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("10���� ����� �̸��� �Է��ϰ� ��������, �������� �����ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1000);

	char name[10][10] = { "" }, temp[10] = "", result = 0, i = 0, j = 0; //name[10][10] 10����Ʈ ���� name�� 10�� �����޶�.

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d ��° ����� �̸��� �Է��ϼ���: ");
		gets(&name[i][0]);
	}
	for (j = 0; j < 10 - 1; j = j + 1)
	{
		for (i = 0; i < 10 - j - 1; i = i + 1)
		{
			if (strcmp(name[i], name[i + 1]) > 0)
			{
				strcpy(temp, 10, name[i]);//�ٲ��ִ°��� temp�� �Ἥ - �ϴ°� �ƴ϶� strcpy�� �Ἥ �ٲ����.
				strcpy(name[i], 10, name[i + 1]);
				strcpy(name[i + 1], 10, temp);
			}
		}
	}

	for (i = 1; i < 10; i = i + 1) // ������ζ�� 0���� 9���� 10����.
	{
		printf("%d:%s\n", i, &name[i][0]);
	}
}
//11
void txt_longest_counting()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("txt���Ͽ� �ִ� ������ ���̿� ���� �� ����, ���° �������� ����ϴ� ���α׷� �Դϴ�.\n");
	Sleep(500);
	printf("--------------------------------------------\n");
	Sleep(1500);
	
	
	
	char fname[256] = "", word[256] = "", sname[256] = "";
	int count = 0, len = 0, max = 0;

	gets(&fname[0]);
	gets(sname);

	FILE* fp = fopen(fname, "rt");
	FILE* fp_out = fopen("result.txt", "wt");// rt: read text ��� 
	//wt�� �ִ�. rb,wb�� �������Ͽ��� �о�帱��.(��� ���α׷�)

	if (fp == NULL)
	{
		printf("������ �������� �ʽ��ϴ�...\n");
		return;
	}

	while (1)
	{
		fscanf(fp, "%s", word);
		len = strlen(word);
		printf("word is %s\n", &word[0]);
		fprintf(fp_out, "%d: %s %d\n", count, &word[0], len); // fp_out���� result.txt�� ������ �̸����� count:word:len�� ������� ���.
		count++;



		if (len > max)//���� �� ���ڱ���
			max = len;
		if (feof(fp))
			break;

	}
	printf("count is %d, max is %d", count, max);
}
//12
void txt_sort()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("txt ������ �ܾ ���ʴ�� �����ϴ� ���α׷��Դϴ�.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);



	char fname[256] = "", word[7657][17] = { "" }, sname[256] = "", data = 0, temp[17] = "";
	int count = 0, len = 0, max = 0;

	//gets(&fname[0]);
	//gets(sname);

	FILE* fp = fopen("wordshort.txt", "rt");
	FILE* fp_out = fopen("result.txt", "wt");// rt: read text ��� 
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
			if (strcmp(word[i], word[i + 1]) > 0)
			{
				strcpy(temp, word[i]);
				strcpy(word[i], word[i + 1]);
				strcpy(word[i + 1], temp);
			}
		}
	}
	for (int i = 0; i < count; i = i + 1)
	{
		fprintf(fp_out, "%d:%s\n", i, word[i]);
	}

	fclose(fp); fclose(fp_out);
}
//13
void en_decrypt()
{
	int number = 0;
	while (1)
	{
		number = en_de_menu();
		printf("���õ� ���� %d\n", number);
		if (number == 1)
		{
			en();
		}
		if (number == 2)
		{
			de();
		}
		if (number == 3) break;
	}
}
//14
int en_de_menu()
{
	int n = 0;

	printf("-------------------------------------------------------\n");
	printf("�� ���α׷��� ��ȣȭ/��ȣȭ ���α׷� �Դϴ�.\n");
	printf("-------------------------------------------------------\n");
	printf("1. ���� ��ȣȭ\n");
	printf("2. ���� ��ȣȭ\n");
	printf("3. ���α׷� ����\n");
	printf("-------------------------------------------------------\n");
	printf("�޴��� �����ϼ���.\n");
	scanf("%d", &n);
	getchar();
	return n;
}
//14�� �޴�
int en()
{
	char fname[256] = "", sname[256] = "", data = 0;
	int key = 0;
	printf("���� ���� �̸�: ");
	gets(fname);
	printf("�纻 ���� �̸�: ");
	gets(sname);
	printf("��ȣ Ű ��: ");
	scanf("%d", &key);

	FILE* fp_in = fopen(fname, "rb");
	FILE* fp_out = fopen(sname, "wb");

	while (1)
	{
		fread(&data, sizeof(char), 1, fp_in);

		data = data ^ key;
		if (feof(fp_in))
			break;
		fwrite(&data, sizeof(char), 1, fp_out);
	}
	printf("%s --> %s ���Ϸ� ��ȣȭ �Ǿ����ϴ�.\n", fname, sname);
	fclose(fp_in);
	fclose(fp_out);
}
//14�� ��ȣȭ
int de()
{
	char fname[256] = "", sname[256] = "", data = 0;
	int key = 0;
	printf("���� ���� �̸�: ");
	gets(fname);
	printf("�纻 ���� �̸�: ");
	gets(sname);
	printf("��ȣ Ű ��: ");
	scanf("%d", &key);

	FILE* fp_in = fopen(fname, "rb");
	FILE* fp_out = fopen(sname, "wb");

	while (1)
	{
		fread(&data, sizeof(char), 1, fp_in);

		data = data ^ key;
		if (feof(fp_in))
			break;
		fwrite(&data, sizeof(char), 1, fp_out);
	}
	printf("%s --> %s ���Ϸ� ��ȣȭ �Ǿ����ϴ�.\n", fname, sname);
	fclose(fp_in);
	fclose(fp_out);
}
//14�� ��ȣȭ
void love()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("������ ����ؿ�~~~~.\n");
	printf("--------------------------------------------\n");
	Sleep(1000);
	printf("1�б⵿�� ���� �������ּż� �����߽��ϴ�~! \n�� �ٸ� �������� ������ �ɰ����� �������Ͷ�  �ƹ��ɷ� �ߺ�Ź�帳�ϴ� (�ڼ�)!!!!!");
}
//16
void short_test()
{
	char wordDB[1261][77] = { "" };
	char ans[256] = "";
	int strCnt = 0, max = 0, len = 0, choice = 0, score = 0, cur = 0, avg = 0;
	unsigned int start_time = 0, end_time = 0, total_time = 0, total_len = 0;
	FILE* fp = fopen("wordshort.txt", "rt");

	system("cls");
	printf("--------------------------------------------\n");
	printf("���� ������ �Է��ϴ� ���α׷� �Դϴ�.(����Ÿ�� ���� ���α׷�)\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


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


		//printf("����: %d, ���� Ÿ��: %d, ��� Ÿ��: %d\n", score, cur, avg); // Ÿ�� ���ϴ� ������ �𸣰ھ��.
		printf("����: %d\n", score);
		printf("���õ� ����: %s\n", wordDB[choice]);


		start_time = time(NULL);
		gets(&ans[0]);
		end_time = time(NULL);



		total_time = total_time + (end_time - start_time);
		total_len = total_len + len;



		printf("�ɸ� �ð�: %d, ���ݱ��� ���Դ� �ܾ��� �ִ� ����: %d\n", end_time - start_time, len);
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
//15
void main()
{
	int no = 0;
	while (1)
	{
		no = menu();
		printf("���õ� ���� %d\n", no);
		Sleep(2000);


		if (no == 0) exit(1);
		if (no == 1) num();
		if (no == 2) gcm_icd();
		if (no == 3) c();
		if (no == 4) even_odd_Cnt();
		if (no == 5) Pal(); // ȸ�� ����� Palindrome �̶�׿�.
		if (no == 6) equal();
		if (no == 7) baseball();
		if (no == 8) grade();
		if (no == 9) name_equal();
		if (no == 10) sort();
		if (no == 11) ten_sort();
		if (no == 12) txt_longest_counting();
		if (no == 13) txt_sort();
		if (no == 14) en_decrypt();
		if (no == 15) short_test();
		if (no == 16) love();
	}
}