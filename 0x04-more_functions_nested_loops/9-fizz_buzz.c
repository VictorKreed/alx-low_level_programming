#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 1;
int toll = 100;
while (i <= toll)
{
if (i %  3 == 0 && i %  5 == 0)
{
printf("fizzbuzz");
}
else if (i %  3 == 0)
{
printf("fizz");
}
else if (i %  5 == 0)
{
printf("buzz");
}
else
{
printf("%d", i);
}
printf(" ");
i++;
}
printf("\n");
return (0);
}
