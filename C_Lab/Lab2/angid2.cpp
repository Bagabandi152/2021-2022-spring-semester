#include <stdio.h>
int main ()
{
	int a, b, c;
	scanf ("%d %d", &a, &b);
	c = (a < b) * a + (a >= b) * b;
	printf("min: %d\n", c);
	c = (a > b) * a + (a <= b) * b;
	printf("max: %d", c);
	return 0;
}
