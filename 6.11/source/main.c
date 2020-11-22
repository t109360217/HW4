#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, j, r;
	int s[10] = { 5,6,8,2,3,7,9,4,1,0 };
	a = 0;
	printf("第一列為原始數列\n");
	for (r = 0; r < 10; r++)
		printf("%d ", s[r]);
	printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9 - j; i++)
		{
			if (s[i + 1] < s[i])
			{
				a = s[i];
				s[i] = s[i + 1];
				s[i + 1] = a;
			}
		}
		for (r = 0; r < 10; r++)
			printf("%d ", s[r]);
		printf("\n");
	}
	system("pause");
	return 0;
}