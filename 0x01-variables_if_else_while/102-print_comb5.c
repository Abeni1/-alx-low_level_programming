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
int a;
int x;
int y = 0;

while (y < 10)
{
	x = 0;
	while (x < 10)
	{
		a = 0;
		while (a < 10)
		{
			c = 1;
			while (c < 10)
			{
				if (!(y == c && x == a))
				{
					putchar('0' + y);
					putchar('0' + x);
					putchar(' ');
					putchar(',');
					putchar( '0' + a + '0' + c);
					if (!(y + x == 18 && c + a == 17 && a == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			a++;
		}
		x++;
	}
	y++;
}
putchar('\n');
return (0);
}
