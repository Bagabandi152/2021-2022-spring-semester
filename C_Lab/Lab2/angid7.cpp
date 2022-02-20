#include <stdio.h>
#include <math.h>

int main(){
	int n, count = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	count = (n == 0) ? 1  : (log10(n) + 1);
    printf("Total digits: %d", count);
	
	return 0;
}
