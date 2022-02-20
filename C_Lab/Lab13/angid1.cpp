#include <stdio.h>

int main ()
{
	int x;
	int *p;
	p = &x;
	printf("Enter a number: ");
	scanf("%d", p);
	printf("%d\n", x) ;
	return 0;
}

