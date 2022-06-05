#include <stdio.h>
#include <unistd.h>

/**
* main - print a line of string without puts and printf
*
* Description: this will print a line of string describing a print
*
* Return: 1 is error
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
