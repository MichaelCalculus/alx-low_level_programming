#include <stdio.h>
/**
 * main - A program that prints the size of various comp
 uter types
 * Return 0 (Success)
 */	
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned l
ong)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned lon
g)sizeof(b));
printf("Size of a char: %lu byte(s)\n", (unsigned lo
ng)sizeof(c));
printf("Size of a char: %lu byte(s)\n", (unsigned l
ong)sizeof(d));
printf("Size of a char: %lu byte(s)\n", (unsigned lon
g)sizeof(f));
return(0);
}
