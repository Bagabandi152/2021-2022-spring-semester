#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, n, p=1;
	printf("a = ");
	scanf("%d", &a);
	printf("n = ");
	scanf("%d", &n);
	while(n!=0){
		if(n%2!=0){
			p=p*a;
		}
		a = a*a;
		n = n/2;
	}
	printf("%d", p);
	return 0;
}
