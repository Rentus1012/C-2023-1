//2. 10���� ����� �Է¹޾Ƽ� ��������, ��������.

#include <stdio.h>
#include <string.h> // strlen, strcmp, strcpy�� �̿��ҷ��� �� ����� ����־����.

void main()
{
	char name[10][10] = { "" }, temp[10] = "", result = 0, i = 0, j = 0; //name[10][10] 10����Ʈ ���� name�� 10�� �����޶�.

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
				strcpy_s(temp, 10, name[i]);//�ٲ��ִ°��� temp�� �Ἥ - �ϴ°� �ƴ϶� strcpy�� �Ἥ �ٲ����.
				strcpy_s(name[i], 10, name[i + 1]);
				strcpy_s(name[i+1], 10, temp);
			}
		}
	}
	
	for (i = 1; i < 10; i = i + 1) // ������ζ�� 0���� 9���� 10����.
	{
		printf("%d:%s\n", i, &name[i][0]); 
	}
}




//strlen  ����
//strcmp  ��
//strcpy  ����(���ڸ� �����ϰڴٰ� temp[10]�̷��� ���µ�, �׷��� ���� �ȵ�.) �׸��� strcpy_s�� ��� �Ѵ�.