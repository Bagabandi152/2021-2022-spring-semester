#include <stdio.h>
#include <math.h>
#define e 2.71828
#define pi 3.14159

long double func(int x){
	long double f;
	return f = (1/sqrt(2*pi))*pow(e, (-1*x*x)/2); 
}

int main(){
	int x, n;
	printf("n = ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("X = ");
		scanf("%d", &x);
		printf("P(X = %d) = %llf\n", x, func(x));
	}
	return 0;
}
