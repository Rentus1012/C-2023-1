#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp, *fp1;
	
	int stid[15], i = 0, j = 0, temp = 0, Cnt = 0;
	
	fopen_s(&fp, "����.txt", "r");
	fopen_s(&fp1, "��������.txt", "w");

	while (fscanf_s(&fp, "%d", &stid[Cnt]) != EOF)
	{
		Cnt= Cnt + 1;
	}
	printf("count : %d", Cnt);
	for (i = 1; i < Cnt; i = i + 1)
		printf("%d\n", stid[i]);


	printf("������\n");
	for (i = 0; i < Cnt; i = i + 1)
	{
		for (j = 0; j < Cnt - 1 - j; j = j + 1)
		{
			if (stid[j] > stid[j + 1])
			{
				temp = stid[j];
				stid[j] = stid[j + 1];
				stid[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < Cnt; i = i + 1)
	{
		printf("%d\n", stid[i]);
		fprintf(fp1, "%d\n", stid[i]);
	}
	fclose(fp);
	return 0;
}