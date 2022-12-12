#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, k;

	for (n = '0'; n < '10'; n++)
	{
		for (m = '0'; m < '10'; m++)
		{
			for (k = '0'; k < '10'; k++)
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);

					if (n != '9')
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
