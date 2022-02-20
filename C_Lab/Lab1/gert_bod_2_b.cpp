#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(){
	int a, b;
	float u, c, rad;
	
	printf("Enter a side of triangle: ");
	scanf("%d", &a);
	printf("Enter another side of triangle: ");
	scanf("%d", &b);
	printf("Enter angle of between given sides: ");
	scanf("%f", &u);
	
	rad = u*pi/180;
	c = sqrt(a*a + b*b - 2*a*b*cos(rad));
	
	printf("c = %.3f ", c);
	
	return 0;
}
