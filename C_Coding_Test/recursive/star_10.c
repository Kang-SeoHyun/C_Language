//2447
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void s_print_star(int i, int j, int n)
{
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			s_print_star(i, j , n / 3);
	}
}

int main(void)
{
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			s_print_star(i, j, n);
		}
		printf("\n");
	}
	return 0;
}