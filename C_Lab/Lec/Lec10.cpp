#include <stdio.h>
#define MAX(x, y) (x >= y)*x + (x < y)*y
#define MIN(x, y) (x >= y)*y + (x < y)*x
#define SQUARE(x) x*x
#define READ(a, n) for(int i = 0; i < n; i++)\
						scanf("%d", &a[i]);
int main(){
	int n = 2;
	
	int a[n];
	printf("2 too oruul: ");
	READ(a, n);
	
	int x = SQUARE(a[0]);
	int y = SQUARE(a[1]);
	
	printf("%d*%d = %d\n", a[0], a[0], x);
	printf("%d*%d = %d\n", a[1], a[1], y);
	
	printf("Max: %d\n", MAX(x, y));
	printf("Min: %d\n", MIN(x, y));
	
	return 0;
}
