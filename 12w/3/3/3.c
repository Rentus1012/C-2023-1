#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu() // void 하면 돌아가는 값이 없음.
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
} // main에 새로운 코드를 쓰면 조금 복잡할수 있음, 그래서 서로운 함수를 또 적음. 하지만 받는 값이 있어야 하기 때문에 void가 아닌 int를 쓴다.
void encrypt()
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
void decrypt()
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
void main()
{
	int no = 0;
	while (1)
	{
		no=menu();
		printf("선택된 값은 %d\n", no);
		if (no == 1)
		{
			encrypt();
		}
		if (no == 2)
		{
			decrypt();
		}
		if (no == 3) break;
	}
}