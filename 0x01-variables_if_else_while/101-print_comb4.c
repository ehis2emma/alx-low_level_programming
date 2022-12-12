#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, k;

	for (n = '0'; n < '15'; n++)
	{
		for (m = '0'; m < '15'; m++)
		{
			for (k = '0'; k < '15'; k++)
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);

					if (n != '11')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
