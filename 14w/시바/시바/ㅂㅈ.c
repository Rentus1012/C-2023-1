#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main()
{
	char com[6] = { 0 }, usr[6] = { 0 }, i = 0, t = 0, limit = 45, stCnt = 0, ballCnt = 0;

	system("cls");
	printf("--------------------------------------------\n");
	printf("�ζ� ���α׷��Դϴ�.\n");
	Sleep(1000);
	printf("��ǻ�Ͱ� 6���� ���ڸ� ������Դϴ�.");
	Sleep(500);
	printf("--------------------------------------------\n");
	Sleep(1500);


	srand(time(NULL));
	while (1)
	{
		for (i = 0; i <= 5; i++)
		{
			com[i] = (rand() % limit) + 1;
			printf("com[%d] is %d\n", i, com[i]);
		}
		/*if (com[0] == com[1] || com[1] == com[2] || com[2] == com[3] || com[3] == com[4] || com[4] == com[5] || com[5] == com[6] || com[6] == com[0])
			continue;
		else
			break;*/

		for (i = 1; i <= 5; i++)
		{
			if (com[0] == com[i])
				continue;
			else
				break;
		}
		for (i = 2; i <= 5; i++)
		{
			if (com[1] == com[i])
				continue;
			else
				break;
		}
		for (i = 3; i <= 5; i++)
		{
			if (com[2] == com[i])
				continue;
			else
				break;
		}
		for (i = 4; i <= 5; i++)
		{
			if (com[3] == com[i])
				continue;
			else
				break;
		}
		if (com[4] == com[5])
			continue;
		else
			break;
	}
	printf("�������� ���ڰ� ��µǾ����ϴ�.\n");
	while (1)
	{
		for (i = 0; i <= 5; i++)
		{
			printf("usr[%d]: ", i);
			scanf("%d", &usr[i]);
		}

		for (i = 1; i <= 5; i++)
		{
			if (usr[0] == com[i])
			{
				printf("��� ���� �ٽ� �Է��ϼ�.\n");
				continue;
			}
			else
				break;
		}
		for (i = 2; i <= 5; i++)
		{
			if (usr[1] == com[i])
			{
				printf("��� ���� �ٽ� �Է��ϼ�.\n");
				continue;
			}
			else
				break;
		}
		for (i = 3; i <= 5; i++)
		{
			if (usr[2] == com[i])
			{
				printf("��� ���� �ٽ� �Է��ϼ�.\n");
				continue;
			}
			else
				break;
		}
		for (i = 4; i <= 5; i++)
		{
			if (usr[3] == com[i])
			{
				printf("��� ���� �ٽ� �Է��ϼ�.\n");
				continue;
			}
			else
				break;
		}
		if (usr[4] == com[5])
		{
			printf("��� ���� �ٽ� �Է��ϼ�.\n");
			continue;
		}
		else
			break;

		if (usr[0] == usr[1] || usr[0] == usr[2] || usr[1] == usr[2])
		{
			printf("�ߺ��� ���ڴ� ������ �����ų�� �����ϴ�. �ٽ� �Է��ϼ���.\n");
			continue;
		}
		else
			break;
	}

	/*printf("%d\n", usr[0]);
	printf("%d\n", usr[1]);
	printf("%d\n", usr[2]);
	printf("%d\n", usr[3]);
	printf("%d\n", usr[4]);
	printf("%d\n", usr[5]);*/

}
