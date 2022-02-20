#include <stdio.h>

int main(){
	int n, a, b, c, d; 
	
	printf("Enter a number with digits: ");
	scanf("%d", &n);
	
	a = n/1000;
	b = n/100%10;
	c = n/10%10;
	d = n%10;
	
	(a == d && b == c)? printf("%d", 1): printf("%d", 0);
	
	return 0;
}
