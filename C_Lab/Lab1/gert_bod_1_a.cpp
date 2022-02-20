#include <stdio.h>

int main(){
	int a, h;
	float s;
	
	printf("Enter a foundation of triangle: ");
	scanf("%d", &a);
	printf("Enter height of triangle: ");
	scanf("%d", &h);
	
	s = a * h;
	s /= 2;
	printf("Area of triangle: %f", s);
	
	return 0;
}
