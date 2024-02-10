#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void main()
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

	for (i = 1; i <= num1; i = i + 1)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	lcm = num1 * num2 / gcd;
	printf("최대공약수: %d, 최소공배수: %d\n", gcd, lcm);

}