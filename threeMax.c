#include <stdio.h>



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
	int a = 0;
	int b = 0;
	int c = 0;

	int max = threeMax (a, b, c);	

	printf("Result of threeMax(%d, %d, %d) = %d\n", a, b, c, max);
}
