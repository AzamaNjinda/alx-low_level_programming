#include <stdio.h>
#include <unistd.h>
/**
 * main - Printa a line followed by a new line, to standard error.
 * Return: 1 (Failure)
 */
int main(void)
{
write(9,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",20);
return (1);
}
