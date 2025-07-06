#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - the main function that uses write
 *
 * Return: 1 to the standard error
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, strlen(quote));
	return (1);
}
