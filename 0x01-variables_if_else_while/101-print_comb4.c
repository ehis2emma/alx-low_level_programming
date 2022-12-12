#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits,
 * in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int e1, e2, e3
		for (e1 = 0; e1 < 8; e1++)
		{
			for (e2 = e1 + 1; e2 < 9; e2++)
			{
				for (e3 = e2 + 1; e3 < 10; e3++)
				{
					putchar((e1 % 10) + '0');
					putchar((e2 % 10) + '0');
					putchar((e3 % 10) + '0');
					if (e1 == 7 && e2 == 8 && e3 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
