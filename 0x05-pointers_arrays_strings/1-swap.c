#include "main.h"
#include <stdio.h>

void swap_int(int a, int b);

int main(void)
{
	int a = 98;
	int b = 42;

	swap_int(a, b);
	return (0);
}

void swap_int(int a, int b)
{
	a = b;
	b = a;
}
