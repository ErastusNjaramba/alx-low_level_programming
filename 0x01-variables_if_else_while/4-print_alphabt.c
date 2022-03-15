# include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Returb: Always 0 (Success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
