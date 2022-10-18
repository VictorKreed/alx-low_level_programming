#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
int ally = 97;
int pull = 122;
while (ally <= pull)
{
putchar(ally);
ally++;
}
return (0);
}
int main(void)
{
putchar(print_alphabet());
printf("\n");
return (0);
}
