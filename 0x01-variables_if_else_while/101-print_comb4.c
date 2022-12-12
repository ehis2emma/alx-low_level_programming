#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, 1;

	for (m = 48; m < 58; m++)
	{
		for (n = 49; n < 58; n++)
		{
			for (1 = 50; 1 < 58; 1++)
			{
				if (n < m && 1 > m)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					if (n != 55 || m != 56)
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
