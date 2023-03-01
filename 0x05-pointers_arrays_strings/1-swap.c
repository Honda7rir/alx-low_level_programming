#include "main.h"
#include <stdio.h>

void swap_int(int a, int b);

int main ()
{
	int a = 98;
	int b = 42;

	swap_int(a, b);
}

void swap_int(int a, int b)
{
	a = b;
	b = a;
}
