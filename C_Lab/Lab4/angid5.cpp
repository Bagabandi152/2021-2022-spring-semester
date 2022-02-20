#include <stdio.h>

int main(){
	int n, c; 
	float f;
	
	printf("Enter a boundary: ");
	scanf("%d", &n);
	
	for(c = 0, f = 32.0; f <= n; c++, f = 9.0/5*c + 32){
		printf("%d %.1f\n", c, f);
	}
	
	return 0;
}
