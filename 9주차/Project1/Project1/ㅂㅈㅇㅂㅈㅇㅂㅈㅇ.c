#include <stdio.h>
#include <stdlib.h>
void main()
{
	int word[20];
	int Cnt = 0, i = 0, j = 0, temp = 0;
	FILE* fp;

	fopen_s(&fp, "schoolnumber.txt", "r");

	printf("오름차순: 1, 내림차순: 2 >> ");
	scanf_s("%d", &Cnt);


	while (fscanf_s(fp, "%s", word, 20) != EOF)
	{
		if (Cnt == 1)
		{
			for (j = 0; j < (14 - 1); j = j + 1)// 10에서 차근차근 1씩 깎이면서 내려온다.
			{
				for (i = 1; i < (15 - 1 - j); i = i + 1)
				{
					if (word[i] > word[i + 1]) // >은 오름차순
					{
						temp = word[i];
						word[i] = word[i + 1];
						word[i + 1] = temp;
					}
				}

			}
		}
		else
		{
			for (j = 0; j < (14 - 1); j = j + 1)// 10에서 차근차근 1씩 깎이면서 내려온다.
			{
				for (i = 1; i < (15 - 1 - j); i = i + 1)
				{
					if (word[i] < word[i + 1]) //<은 내림차순
					{
						temp = word[i];
						word[i] = word[i + 1];
						word[i + 1] = temp;
					}
				}

			}
		}
		printf("%s\n", word);
	}
	fclose(fp);
	return 0;
}