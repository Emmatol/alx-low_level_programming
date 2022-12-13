#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line, except m and q
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'm' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
