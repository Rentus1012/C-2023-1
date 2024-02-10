#include <stdio.h>

void main()
{
	char name[2][10] = { "" }, temp[10] = "";
	int result = 0, len1 = 0, len2 = 0;
	// name[10] = ""은 한사람의 이름을 저장할수 있음.
	// name[2][10] = "" 은 2사람.

	gets(& name[0][0]); //name[0]
	gets(& name[1][0]); //name[1]
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

	
	printf("첫번째 이름:%s \n두번째 이름:%s \nresult = %d\n", &name[0][0], &name[1][0], result);
	printf("첫번째 길이:%d \n 두번째 길이:%d \n", len1, len2);
	//&name[0][0], &name[1][0] 대신 name[0], name[1] 이렇게 써도 상관 X
}