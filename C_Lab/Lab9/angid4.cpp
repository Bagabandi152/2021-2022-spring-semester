#include <stdio.h>

int min5(int a, int b, int c, int d, int e);
int min(int x, int y){
	if(x < y) return x;
	else return y; 
}

int main(){
	int a, b, c, d, e;
	
	printf("Enter a numbers:\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	int min = min5(a, b, c, d, e);
	printf("Hamgiin baga too: %d\n", min);
	
	return 0;
}
int min5(int a, int b, int c, int d, int e){
	int mn;
	
	mn = min(min(min(min(a, b), c), d), e);
		
	return mn;
}
