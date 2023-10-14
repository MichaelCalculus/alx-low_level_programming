#include <stdio.h>
/**
 * main - Print the alphabet without q nad e.
 * Return: Always 0 (Success)
*/

int main(void)
{
	 int c;

       	c = 'a';
      	 while
       	         (c <= 'z') {
                       if ((c != 'q' && c != 'e') && c <= 'z')
                               putchar(c);
                       c++;
                }
        putchar('\n');
        return (0);
}
