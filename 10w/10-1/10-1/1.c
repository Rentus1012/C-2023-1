#include <stdio.h>

void main()
{
	char name[2][10] = { "" }, temp[10] = "";
	int result = 0, len1 = 0, len2 = 0;
	// name[10] = ""�� �ѻ���� �̸��� �����Ҽ� ����.
	// name[2][10] = "" �� 2���.

	gets(& name[0][0]); //name[0]
	gets(& name[1][0]); //name[1]
	//gets_s(&name[0][0],sizeof(name[0]));
	//gets_s(&name[0][0],10);
	// �̷��� �ΰ��� �ᵵ ��(������ ����)

	
	result = strcmp(name[0], name[1]); // ������ �ƴ��� ����(?)
	len1 = strlen(name[0]);
	len2 = strlen(name[1]);
	if (result == 0)
	{
		printf("�� ����� �̸��� �����ϴ�.\n");
	}
	else
	{
		if (result > 0)
		{
			strcpy(temp, name[0]); // �����ϴ°���.
			strcpy(name[0], name[1]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
			strcpy(name[1], temp); // strcpy�� �ϴ°���.
			printf("�� ����� �̸��� ���� �ʽ��ϴ�.\n");
		}
		else
		{
			strcpy(temp, name[1]); // �����ϴ°���.

			strcpy(name[1], name[0]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
			strcpy(name[0], temp); // strcpy�� �ϴ°���.
			printf("�� ����� �̸��� ���� �ʽ��ϴ�.\n");
		}
	}

	
	printf("ù��° �̸�:%s \n�ι�° �̸�:%s \nresult = %d\n", &name[0][0], &name[1][0], result);
	printf("ù��° ����:%d \n �ι�° ����:%d \n", len1, len2);
	//&name[0][0], &name[1][0] ��� name[0], name[1] �̷��� �ᵵ ��� X
}