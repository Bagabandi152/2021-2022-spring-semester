#include <stdio.h>

int main(){
	int a, b, c, d; 
	
	printf("Enter digits: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%d%d%d%d ", a, b, c, d);
	printf("%d%d%d%d ", a, b, d, c);
	printf("%d%d%d%d ", a, d, b, c);
	printf("%d%d%d%d ", a, d, c, b);
	printf("%d%d%d%d ", a, c, d, b);
	printf("%d%d%d%d ", a, c, b, d);
	printf("%d%d%d%d ", b, a, c, d);
	printf("%d%d%d%d ", b, a, d, c);
	printf("%d%d%d%d ", b, c, d, b);
	printf("%d%d%d%d ", b, c, b, d);
	printf("%d%d%d%d ", b, d, b, c);
	printf("%d%d%d%d ", b, d, c, b);
	printf("%d%d%d%d ", c, a, c, d);
	printf("%d%d%d%d ", c, a, d, c);
	printf("%d%d%d%d ", c, b, a, d);
	printf("%d%d%d%d ", c, b, d, a);
	printf("%d%d%d%d ", c, d, b, a);
	printf("%d%d%d%d ", c, d, a, b);
	printf("%d%d%d%d ", d, a, b, c);
	printf("%d%d%d%d ", d, a, c, b);
	printf("%d%d%d%d ", d, b, a, c);
	printf("%d%d%d%d ", d, b, c, a);
	printf("%d%d%d%d ", d, c, a, b);
	printf("%d%d%d%d ", d, c, b, a);
	
	return 0;
}
