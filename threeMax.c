#include <stdio.h>


// Finds the max of three values a, b and c
int threeMax (int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	
	if (b >= a && b >= c)
	{
		return b;
	}

	if (c >= a && c >= b)
	{
		return c;
	}
}

void main ()
{
	int a = 12;
	int c = 122;
	int b = 39;

	int max = threeMax (a, b, c);	

	printf("Result of threeMax(%d, %d, %d) = %d\n", a, b, c, max);
}

