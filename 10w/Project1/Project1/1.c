#include <stdio.h>

void main()
{
	int input, year;

	printf("윤년이면 1, 아니면 0");

	printf("연도 입력:____\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0) || (input % 400 == 0));
	printf("입력한 %d 년은 %d 에 해당합니다.\n", input, year);

	return 0;
}