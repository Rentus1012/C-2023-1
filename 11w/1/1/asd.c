//1. ���α׷� ����ڷκ��� �θ��� ����� �̸��� �Է¹޾� ��Ұ��� �ľ�.

#include <stdio.h>
#include <string.h> // strlen, strcmp, strcpy�� �̿��ҷ��� �� ����� ����־����.

void main()
{
	char name1[10] = "", name2[10] = "", len = 0, result = 0, temp[10] = "";

	gets(&name1[0]); //Ű���忡�� ���ڿ��� �Է¹���. ���ڿ��� ������ ����. ������ ���͵� ��ӵ�
	gets_s(&name2[0],sizeof(name2));// _s�� �ٿ��� �ϴ� ���� �ڿ� �� ����Ʈ�� ������ �����ؾ���. gets_s(&name1[0],sizeof(10)); �̷������� ,10�� �ٿ�����.

	len = strlen(name1); //&name[0]
	result = strcmp(&name1[0], &name2[0]);

	if (result = -1)
		printf("2���� �̸��� �� Ů�ϴ�.");
	if (result = 1)
		printf("1���� �̸��� �� Ů�ϴ�.");
	if (result = 0)
		printf("�� �̸��� �����ϴ�.");

	printf("1. %s, 2: %s, len: %d, result: %d\n", &name1[0], &name2[0], len, result);
}




//strlen  ����
//strcmp  ��
//strcpy  ����(���ڸ� �����ϰڴٰ� temp[10]�̷��� ���µ�, �׷��� ���� �ȵ�.) �׸��� strcpy_s�� ��� �Ѵ�.
