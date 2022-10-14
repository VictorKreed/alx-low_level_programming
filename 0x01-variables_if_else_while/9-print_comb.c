#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int var = 48;
int gar = 44;
int far = 32;
while (var < 58)
{
putchar(var);
if (var < 57)
{
putchar(gar);
}
putchar(far);
var++;
}
return (0);
}
