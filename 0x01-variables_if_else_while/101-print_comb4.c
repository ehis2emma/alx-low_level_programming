#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, 1;

	for (n = '0'; n < '9'; n++)
	{
		for (m = '0'; m < '9'; m++)
		{
			for (1 = '0'; 1 < '9'; 1++)
			{
				if (n < m && m < 1)
				{
					putchar(n);
					putchar(m);
					putchar(1);

					if (n != '7')
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
