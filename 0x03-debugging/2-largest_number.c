#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c);
    {
    	largest = a;
	printf("a");
    }
    if (b > a && b > c);
    {
    	largest = b;
	printf("b");
    }
    else (c > a && c > b);
    {
    	largest = c;
	printf("c");
    }

    return (largest);
}
