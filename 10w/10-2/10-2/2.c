#include <stdio.h>10
void main()
{
	char name[10][10] = { "" }, i = 0, temp[10] = "", j = 0;
	//10���ڸ� 2����� �Է��Ҽ� �ִ� ĭ�� �����޶�.
	//�ѻ������ 10ĭ�� �Է��Ҽ� �ְ� ����.


	for (i = 0; i < 10; i = i + 1)
	{
		gets_s(&name[i][0], sizeof(name[i])); // ������ �����ֱ�
	}


	for (j = 0; j < 10 - 1; j = j + 1)//���� ��Ʈ
	{
		for (i = 0; i < 10 - 1- j; i = i + 1)//����
		{
			if (strcmp(name[i], name[i + 1]) == 1)
			{
				strcpy(temp, name[i]); // �����ϴ°���.
				strcpy(name[i], name[i + 1]); // ���⼭�� ������ ���ó�� �̵��ϴ°Ŵ� �ȵ�
				strcpy(name[i + 1], temp); // strcpy�� �ϴ°���.
			}
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d ��° �̸� : %s \n", i, &name[i][0]);
	}
}