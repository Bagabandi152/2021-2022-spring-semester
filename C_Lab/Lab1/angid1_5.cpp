#include <stdio.h>

int main(){
	int a, b;
	float d, r;
	
	printf("Enter a number:");
	scanf("%d", &a);
	printf("Enter a number:");
	scanf("%d", &b);
	
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	d = a;
	d = d/b;
	printf("%d / %d = %.2f\n", a, b, d);
	r = a%b;
	printf("%d / %d, remain = %d", a, b, a%b);
	
	return 0;
}
