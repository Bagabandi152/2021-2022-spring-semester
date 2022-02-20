#include <stdio.h>

void swap(int *a, int *b);
int main ()
{
	int x = 1, y = 2;
	printf("Initial: %d %d\n", x, y);
	swap(&x, &y);
	printf("Swapped: %d %d\n", x, y);
	return 0;
}
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
