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
int main(void)
{
int c;
int d;
int e;
int f = 0;

while (f < 10)
{
	e = 0 + f;
	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (!(f == c && e == d))
				{
					putchar('0' + f);
					putchar('0' + e);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
					if (!(f + e == 18 && c + d == 17 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	f++;
}
putchar('\n');
return (0);
}
