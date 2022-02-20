#include<stdio.h>
int fibonache(int n){
	int a=0, b=1;
	if(n==0){
		return a;
	}else if(n==1){
		return b;
	}
	return fibonache(n-2)+fibonache(n-1);
}
int main(){
	int n, fib;
	scanf("%d", &n);
	fib = fibonache(n);
	printf("fib(%d) = %d\n", n, fib);
	return 0;
}
