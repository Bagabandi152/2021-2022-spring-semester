#include<stdio.h>
long dectobin(int n){
	int r, i=1, bin=0;
	while(n!=0){
		r = n%2;
		n = n/2;
		bin = bin + i*r;
		i*=10;
	}
	return bin;
}
int main(){
	int n;
	long bin;
	printf("Please enter a number: ");
	scanf("%d", &n);
	bin = dectobin(n);
	printf("%ld", bin);
	return 0;
}

