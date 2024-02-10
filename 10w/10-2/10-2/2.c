#include <stdio.h>10
void main()
{
	char name[10][10] = { "" }, i = 0, temp[10] = "", j = 0;
	//10글자를 2사람이 입력할수 있는 칸을 만들어달라.
	//한사람에게 10칸을 입력할수 있게 해줌.


	for (i = 0; i < 10; i = i + 1)
	{
		gets_s(&name[i][0], sizeof(name[i])); // 사이즈 정해주기
	}


	for (j = 0; j < 10 - 1; j = j + 1)//버블 소트
	{
		for (i = 0; i < 10 - 1- j; i = i + 1)//정렬
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