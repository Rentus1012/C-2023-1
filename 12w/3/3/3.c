#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu() // void �ϸ� ���ư��� ���� ����.
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
} // main�� ���ο� �ڵ带 ���� ���� �����Ҽ� ����, �׷��� ���ο� �Լ��� �� ����. ������ �޴� ���� �־�� �ϱ� ������ void�� �ƴ� int�� ����.
void encrypt()
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
void decrypt()
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
void main()
{
	int no = 0;
	while (1)
	{
		no=menu();
		printf("���õ� ���� %d\n", no);
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