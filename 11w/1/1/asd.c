//1. 프로그램 사용자로부터 두명의 사람의 이름을 입력받아 대소관계 파악.

#include <stdio.h>
#include <string.h> // strlen, strcmp, strcpy를 이용할려면 이 헤더를 집어넣어야함.

void main()
{
	char name1[10] = "", name2[10] = "", len = 0, result = 0, temp[10] = "";

	gets(&name1[0]); //키보드에서 문자열을 입력받음. 문자열만 받을수 있음. 공백이 나와도 계속됨
	gets_s(&name2[0],sizeof(name2));// _s를 붙여야 하는 경우는 뒤에 몇 바이트를 쓸껀지 결정해야함. gets_s(&name1[0],sizeof(10)); 이런식으로 ,10을 붙여야함.

	len = strlen(name1); //&name[0]
	result = strcmp(&name1[0], &name2[0]);

	if (result = -1)
		printf("2번의 이름이 더 큽니다.");
	if (result = 1)
		printf("1번의 이름이 더 큽니다.");
	if (result = 0)
		printf("두 이름은 같습니다.");

	printf("1. %s, 2: %s, len: %d, result: %d\n", &name1[0], &name2[0], len, result);
}




//strlen  길이
//strcmp  비교
//strcpy  복사(문자를 복사하겠다고 temp[10]이런걸 쓰는데, 그러면 실행 안됨.) 그리고 strcpy_s를 써야 한다.
