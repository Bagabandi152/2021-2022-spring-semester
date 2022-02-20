#include <stdio.h>
#define N 10000


void result(int n){
	int a, b, c, d;
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if((a + b) == (c + d)) printf("%d ", n);
}

int main(){
	
	printf("Respond: \n");
	
	
	for(int i = 1000; i < N; i++){
		result(i);
	}
	
	return 0;
}
