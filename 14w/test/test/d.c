#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void main()
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

	for (i = 1; i <= num1; i = i + 1)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	lcm = num1 * num2 / gcd;
	printf("�ִ�����: %d, �ּҰ����: %d\n", gcd, lcm);

}