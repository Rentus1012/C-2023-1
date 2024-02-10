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
	printf("이 프로그램은 내가 만든 프로그램의 목록입니다.\n");
	Sleep(500);
	printf("실행하고 싶은 프로그램을 입력하세요.\n");
	Sleep(1000);
	printf("프로그램을 종료하실려면 0번을 입력해주세요.\n");
	Sleep(1000);
	printf("-----------------------------------------------------------\n");
	printf("1. 1부터 100까지의 합(짝수, 홀수, 소수 포함)\n");
	printf("2. 2수를 입력해서 그것의 최대공약수, 최소공배수 구하기.\n");
	printf("3. 시, 분, 초를 입력해서 시계 띄우기.\n");
	printf("4. 숫자 입력하고 짝수, 홀수 카운팅 하는 프로그램.\n");
	printf("5. 회문인지 아닌지 판단하는 프로그램\n");
	printf("6. 두 단어가 같은지 아닌지 출력하는 프로그램.\n");
	printf("7. 야구게임 프로그램.\n");
	printf("8. 10명의 성적을 입력해서 총합, 평균 입력.\n");
	printf("9. 두명의 이름을 입력하고 똑같은지 아닌지 출력하는 프로그램.\n");
	printf("10. 10명의 사람을 입력하고 정렬.\n");
	printf("11. 10명의 사람을 입력하고 내림차순, 오름차순 정렬\n");
	printf("12. txt파일에 있는 문장의 길이와 가장 긴 길이, 몇번째 글자인지 출력.\n");
	printf("13. txt 파일의 단어를 차례대로 정렬.\n");
	printf("14. 암호화/복호화 프로그램 만들기\n");
	printf("15. 랜덤 문장을 입력하는 프로그램(한컴타자 같은 프로그램)\n");
	printf("16. 교수님 사랑해요\n"); //ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
	printf("-----------------------------------------------------------\n");
	printf("여기에 입력 --> ");

	scanf("%d", &n);
	getchar();
	return n;
}
//메뉴
void num()
{
	int no = 0, sum = 0, i = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("1부터 100 까지의 합을 구하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	printf("다음 항목을 고르세요.\n");
	printf("--------------------------------------------\n");
	printf("1. 1부터 100까지의 정수 합\n");
	printf("2. 1부터 100까지의 짝수 합\n");
	printf("3. 1부터 100까지의 홀수 합\n");
	printf("4. 1부터 100까지의 소수가 뭐가 있는지??\n");
	printf("--------------------------------------------\n");
	printf("값 입력: ");
	scanf("%d", &no);

	if (no == 1)
	{
		system("cls");
		printf("잠시만 기다려주세요. 계산중입니다.");
		Sleep(1500);
		for (i = 0; i <= 100; i++)
		{
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1부터 100까지의 정수의 합은 %d 입니다.\n", sum);
	}
	if (no == 2)
	{
		system("cls");
		for (i = 2; i <= 100; i = i + 2)
		{
			printf("잠시만 기다려주세요. 계산중입니다.");
			Sleep(1500);
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1부터 100까지의 짝수의 합은 %d 입니다.\n", sum);
	}
	if (no == 3)
	{
		system("cls");
		for (i = 1; i <= 100; i = i + 2)
		{
			printf("잠시만 기다려주세요. 계산중입니다.");
			Sleep(1500);
			sum = sum + i;
			printf("%d\n", sum);
		}
		system("cls");
		printf("1부터 100까지의 홀수의 합은 %d 입니다.\n", sum);
	}
	if (no == 4)
	{
		system("cls");
		for (i = 2; i <= 100; i = i + 1)
		{
			printf("잠시만 기다려주세요. 계산중입니다.");
			Sleep(1500);
			printf("---------------------------------------------\n");
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			{
				printf("소수는 %d 입니다.", sum);
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
	printf("두수의 최소공배수, 최대공약수를 구하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


	printf("두개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	//printf("첫번째 숫자: %d, 두번째 숫자: %d\n", num1, num2);

	for (i = 0; i <= num1; i = i + 1)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	lcm = num1 * num2 / gcd;
	printf("최대공약수: %d, 최소공배수: %d\m", gcd, lcm);

}
//2
void c()
{
	int num = 0, i = 0, h = 0, m = 0, s = 0;


	system("cls");
	printf("--------------------------------------------\n");
	printf("시, 분, 초를 받아 시계를 출력하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


	printf("시, 분, 초를 입력하세요.\n");
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
		printf("하나의 정수를 출력받아 짝수 횟수, 홀수 횟수, 소수 횟수를 구하는 프로그램입니다.\n");
		printf("--------------------------------------------\n");
		Sleep(1500);
		printf("정수 입력: ");
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
		printf("짝수 횟수: %d, 홀수 횟수: %d, 소수 횟수: %d\n", evenCnt, oddCnt, primeCnt);
	}
}
//4
void Pal()
{
	char word[20] = "", i = 0, wordCnt = 0, flag = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("회문인지 아닌지를 판단하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);
	printf("단어 입력: ");
	scanf("%s", &word[0]);

	printf("입력한 단어는 %s 입니다.\n", &word[0]);


	for (i = 0; i <= 19; i++)
	{
		if (word[i] == '\0')
			break;
		wordCnt++;

	}
	printf("단어의 길이: %d", wordCnt);

	for (i = 0; i < (wordCnt / 2); i++)
	{
		if (word[i] == word[wordCnt - 1 - i])
			flag++;
		if (word[i] == word[wordCnt / 2])
			break;
	}
	if (flag == wordCnt / 2)
		printf("%s는 회문입니다.");
	else
		printf("%s는 회문이 아닙니다.\n", word[0]);
}
//5
void equal()
{
	char word1[20] = "", word2[20] = "", i = 0, wordCnt = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("두단어가 같은지 아닌지 구하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);
	printf("첫번째 단어 입력: ");
	scanf("%s", &word1[0]);
	printf("두번째 단어 입력: ");
	scanf("%s", &word2[0]);

	printf("첫번째 단어: %s, 두번째 단어: %s", &word1[0], &word2[0]);


	for (i = 0; i < 20; i++)
	{
		if (word1[i] - word2[i] != 0)
			printf("두 단어는 서로 다릅니다.");
		break;
	}

	for (i = 0; i < 20; i++)
	{
		if (word1[i] == word2[i])
			wordCnt++;

	}
	if (wordCnt == i)
		printf("두 단어는 같습니다.");

}
//6
void baseball()
{
	char com[3] = { 0 }, usr[3] = { 0 }, i = 0, t = 0, limit = 9, stCnt = 0, ballCnt = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("야구게임 프로그램입니다.\n");
	Sleep(1000);
	printf("컴퓨터가 숫자의 숫자를 출력중입니다.");
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
	printf("세개의 숫자가 출력되었습니다.\n");

	while (1)
	{
		for (i = 0; i < 3; i++)
		{
			printf("usr[%d]: %d\n", i);
			scanf("%d", &usr[i]);
		}
		if (usr[0] == usr[1] || usr[0] == usr[2] || usr[1] == usr[2])
		{
			printf("중복된 숫자는 게임을 실행시킬수 없습니다. 다시 입력하세요.\n");
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
	printf("스트라이크 횟수는 %d번 입니다.\n", stCnt);

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
	printf("볼 횟수는 %d 번 입니다.\n", ballCnt);

}
//7
void grade()
{
	int score[11] = { 0 }, sum = 0, i = 0, j = 0, temp = 0, Cnt = 0, A = 0, B = 0, C = 0, D = 0, E = 0, Tot = 0;
	
	system("cls");
	printf("--------------------------------------------\n");
	printf("성적 정렬 프로그램입니다.\n");
	Sleep(1000);
	printf("--------------------------------------------\n");
	Sleep(1500);
	
	double avg = 0;
	printf("10명의 성적을 입력하세요.\n");
	printf("--------------------------------------------\n");

	for (i = 1; i <= 10; i = i + 1)
	{
		printf("%d번째 사람의 성적을 입력하시오: \n", i);
		scanf("%d", &score[i]);
	}

	printf("오름차순: 1, 내림차순: 2 >> ");
	scanf("%d", &Cnt);

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
//8
void name_equal()
{
	char name[2][10] = { "" }, temp[10] = "";
	int result = 0, len1 = 0, len2 = 0;
	// name[10] = ""은 한사람의 이름을 저장할수 있음.
	// name[2][10] = "" 은 2사람.

	system("cls");
	printf("--------------------------------------------\n");
	printf("두명의 이름을 입력하고 똑같은지 아닌지 출력하는 프로그램 입니다.\n");
	Sleep(1000);
	printf("--------------------------------------------\n");
	Sleep(500);

	printf("첫번째 사람의 이름을 입력하세요: ");
	gets(&name[0][0]);//name[0]
	printf("두번째 사람의 이름을 입력하세요: ");
	gets(&name[1][0]); //name[1]
	//gets_s(&name[0][0],sizeof(name[0]));
	//gets_s(&name[0][0],10);
	// 이렇게 두개로 써도 됨(사이즈 지정)


	result = strcmp(name[0], name[1]); // 같은지 아닌지 측정(?)
	len1 = strlen(name[0]);
	len2 = strlen(name[1]);
	if (result == 0)
	{
		printf("두 사람의 이름은 같습니다.\n");
	}
	else
	{
		if (result > 0)
		{
			strcpy(temp, name[0]); // 복사하는거임.
			strcpy(name[0], name[1]); // 여기서는 기존의 방식처럼 이동하는거는 안됨
			strcpy(name[1], temp); // strcpy로 하는거임.
			printf("두 사람의 이름은 같지 않습니다.\n");
		}
		else
		{
			strcpy(temp, name[1]); // 복사하는거임.

			strcpy(name[1], name[0]); // 여기서는 기존의 방식처럼 이동하는거는 안됨
			strcpy(name[0], temp); // strcpy로 하는거임.
			printf("두 사람의 이름은 같지 않습니다.\n");
		}
	}


	printf("첫번째 이름:%s ,두번째 이름:%s\n", &name[0][0], &name[1][0]);
	printf("첫번째 사람의 이름 길이:%d \n 두번째 사람의 이름 길이:%d \n", len1, len2);
	//&name[0][0], &name[1][0] 대신 name[0], name[1] 이렇게 써도 상관 X
}
//9
void sort()
{
	char name[10][10] = { "" }, i = 0, temp[10] = "", j = 0;
	//10글자를 2사람이 입력할수 있는 칸을 만들어달라.
	//한사람에게 10칸을 입력할수 있게 해줌.
	system("cls");
	printf("--------------------------------------------\n");
	printf("10명의 이름을 입력하고 정렬하는 프로그램 입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d번째 사람의 이름을 입력하세요: ", i);
		gets(&name[i][0]); // 사이즈 정해주기
	}


	for (j = 0; j < 10 - 1; j = j + 1)//버블 소트
	{
		for (i = 0; i < 10 - 1 - j; i = i + 1)//정렬
		{
			if (strcmp(name[i], name[i + 1]) == 1)
			{
				strcpy(temp, name[i]); // 복사하는거임.
				strcpy(name[i], name[i + 1]); // 여기서는 기존의 방식처럼 이동하는거는 안됨
				strcpy(name[i + 1], temp); // strcpy로 하는거임.
			}
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d 번째 이름 : %s \n", i, &name[i][0]);
	}
}
//10
void ten_sort()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("10명의 사람의 이름을 입력하고 오름차순, 내림차순 정렬하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1000);

	char name[10][10] = { "" }, temp[10] = "", result = 0, i = 0, j = 0; //name[10][10] 10바이트 문자 name을 10개 만들어달라.

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d 번째 사람의 이름을 입력하세요: ");
		gets(&name[i][0]);
	}
	for (j = 0; j < 10 - 1; j = j + 1)
	{
		for (i = 0; i < 10 - j - 1; i = i + 1)
		{
			if (strcmp(name[i], name[i + 1]) > 0)
			{
				strcpy(temp, 10, name[i]);//바꿔주는거임 temp를 써서 - 하는게 아니라 strcpy를 써서 바꿔야함.
				strcpy(name[i], 10, name[i + 1]);
				strcpy(name[i + 1], 10, temp);
			}
		}
	}

	for (i = 1; i < 10; i = i + 1) // 원래대로라면 0부터 9까지 10개임.
	{
		printf("%d:%s\n", i, &name[i][0]);
	}
}
//11
void txt_longest_counting()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("txt파일에 있는 문장의 길이와 가장 긴 길이, 몇번째 글자인지 출력하는 프로그램 입니다.\n");
	Sleep(500);
	printf("--------------------------------------------\n");
	Sleep(1500);
	
	
	
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
		fprintf(fp_out, "%d: %s %d\n", count, &word[0], len); // fp_out으로 result.txt의 파일의 이름으로 count:word:len의 순서재로 출력.
		count++;



		if (len > max)//가장 긴 문자길이
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
	printf("txt 파일의 단어를 차례대로 정렬하는 프로그램입니다.\n");
	printf("--------------------------------------------\n");
	Sleep(1500);



	char fname[256] = "", word[7657][17] = { "" }, sname[256] = "", data = 0, temp[17] = "";
	int count = 0, len = 0, max = 0;

	//gets(&fname[0]);
	//gets(sname);

	FILE* fp = fopen("wordshort.txt", "rt");
	FILE* fp_out = fopen("result.txt", "wt");// rt: read text 모드 
	//wt도 있다. rb,wb는 실행파일에서 읽어드릴때.(상용 프로그램)

	if (fp == NULL)//만약 파일이 존재하지 않다면?
	{
		printf("파일이 존재하지 않습니다...\n");
		return;
	}

	/*while (1)//복사 붙여넣기
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
		printf("선택된 값은 %d\n", number);
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
	printf("이 프로그램은 복호화/암호화 프로그램 입니다.\n");
	printf("-------------------------------------------------------\n");
	printf("1. 파일 암호화\n");
	printf("2. 파일 복호화\n");
	printf("3. 프로그램 종료\n");
	printf("-------------------------------------------------------\n");
	printf("메뉴를 선택하세요.\n");
	scanf("%d", &n);
	getchar();
	return n;
}
//14번 메뉴
int en()
{
	char fname[256] = "", sname[256] = "", data = 0;
	int key = 0;
	printf("원본 파일 이름: ");
	gets(fname);
	printf("사본 파일 이름: ");
	gets(sname);
	printf("암호 키 값: ");
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
	printf("%s --> %s 파일로 암호화 되었습니다.\n", fname, sname);
	fclose(fp_in);
	fclose(fp_out);
}
//14번 암호화
int de()
{
	char fname[256] = "", sname[256] = "", data = 0;
	int key = 0;
	printf("원본 파일 이름: ");
	gets(fname);
	printf("사본 파일 이름: ");
	gets(sname);
	printf("암호 키 값: ");
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
	printf("%s --> %s 파일로 복호화 되었습니다.\n", fname, sname);
	fclose(fp_in);
	fclose(fp_out);
}
//14번 복호화
void love()
{
	system("cls");
	printf("--------------------------------------------\n");
	printf("교수님 사랑해용~~~~.\n");
	printf("--------------------------------------------\n");
	Sleep(1000);
	printf("1학기동안 저희를 가르쳐주셔서 감사했습니당~! \n또 다른 수업에서 만나게 될거지만 이제부터라도  아무쪼록 잘부탁드립니다 (박수)!!!!!");
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
	printf("랜덤 문장을 입력하는 프로그램 입니다.(한컴타자 같은 프로그램)\n");
	printf("--------------------------------------------\n");
	Sleep(1500);


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


		//printf("점수: %d, 현재 타수: %d, 평균 타수: %d\n", score, cur, avg); // 타수 구하는 공식을 모르겠어요.
		printf("점수: %d\n", score);
		printf("선택된 문장: %s\n", wordDB[choice]);


		start_time = time(NULL);
		gets(&ans[0]);
		end_time = time(NULL);



		total_time = total_time + (end_time - start_time);
		total_len = total_len + len;



		printf("걸린 시간: %d, 지금까지 나왔던 단어의 최대 길이: %d\n", end_time - start_time, len);
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
//15
void main()
{
	int no = 0;
	while (1)
	{
		no = menu();
		printf("선택된 값은 %d\n", no);
		Sleep(2000);


		if (no == 0) exit(1);
		if (no == 1) num();
		if (no == 2) gcm_icd();
		if (no == 3) c();
		if (no == 4) even_odd_Cnt();
		if (no == 5) Pal(); // 회문 영어로 Palindrome 이라네요.
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