//2. 10명의 사람을 입력받아서 오름차순, 내림차순.

#include <stdio.h>
#include <string.h> // strlen, strcmp, strcpy를 이용할려면 이 헤더를 집어넣어야함.

void main()
{
	char name[10][10] = { "" }, temp[10] = "", result = 0, i = 0, j = 0; //name[10][10] 10바이트 문자 name을 10개 만들어달라.

	for (i = 0; i < 10; i = i + 1)
	{
		gets_s(&name[i][0], sizeof(name[i]));
	}
	for (j = 0; j < 10 - 1; j = j + 1)
	{
		for (i = 0; i < 10 - j - 1; i = i + 1)
		{
			if (strcmp(name[i],name[i + 1]) > 0)
			{
				strcpy_s(temp, 10, name[i]);//바꿔주는거임 temp를 써서 - 하는게 아니라 strcpy를 써서 바꿔야함.
				strcpy_s(name[i], 10, name[i + 1]);
				strcpy_s(name[i+1], 10, temp);
			}
		}
	}
	
	for (i = 1; i < 10; i = i + 1) // 원래대로라면 0부터 9까지 10개임.
	{
		printf("%d:%s\n", i, &name[i][0]); 
	}
}




//strlen  길이
//strcmp  비교
//strcpy  복사(문자를 복사하겠다고 temp[10]이런걸 쓰는데, 그러면 실행 안됨.) 그리고 strcpy_s를 써야 한다.