#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of two two-digit numbers.
 *The numbers should range from 0 to 99
 *The two numbers should be separated by a space
 *All numbers should be printed with two digits. 1 should be printed as 01
 *The combination of numbers must be separated by comma, followed by a space
 *The combinations of numbers should be printed in ascending order
 *00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * Return: 0
 */
int main()
{
	int p = 48, q = 48, y = 48, x = 49;

	while (p < 58)
	{
		while (q < 58)
		{
			while (y < 58)
			{
				while (x < 58)
				{
					putchar(p);
					putchar(q);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (!(p == 57 &&
						q == 56 &&
						y == 57 &&
						x == 57))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			q++;
			q = p;
			x = q + 1;
		}
		p++;
		q = 48;
		y = p;
		x = q+ 1;
	}
	putchar('\n');
	return (0);
}
