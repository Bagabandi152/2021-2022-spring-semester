#include <stdio.h>

int main(){
	int n, s = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n){
		s += n%10;
		n /= 10;
	}
	
	printf("Digits sum: %d", s);
	
	return 0;
}
