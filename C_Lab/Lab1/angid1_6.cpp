#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, d;
	float x;
	
	printf("Enter a number:\n");
	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);
	printf("c = "); scanf("%d", &c);
	printf("d = "); scanf("%d", &d);
	
	x = sqrt((a + b)*(a + b) + d)/2;
	
	printf("value of expression = %.3f", x);
	
	return 0;
}
