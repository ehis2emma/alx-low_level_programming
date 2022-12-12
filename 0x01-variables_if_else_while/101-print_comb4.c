#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, k;

	for (n = '0'; n < '9'; n++)
	{
		for (m = '0'; m < '9'; m++)
		{
			for (k = '0'; k < '9'; k++)
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);

					if (n != '6' || m != '7')
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
