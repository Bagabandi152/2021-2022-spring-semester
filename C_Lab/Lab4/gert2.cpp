#include <stdio.h>

int main(){
	int a, b, r;
	
	printf("Enter a value in a and b: ");
	scanf("%d %d", &a, &b);
	
	r = a%b;
	while(r){
		a = b;
		b = r;
		r = a%b; 
	}
	
	printf("MGD: %d", b);
	
	return 0;
}
