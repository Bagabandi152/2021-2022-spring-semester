#include<stdio.h>
int main(){
	int n, m, s=0;
	printf("Please enter a number: ");
	scanf("%d", &n);
	m = n;
	while(m>0){
		s += m%10;
		m/=10;
	}
	if(n%s==0) printf("%d ", i);
}
