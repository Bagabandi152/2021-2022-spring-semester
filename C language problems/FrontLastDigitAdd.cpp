#include<stdio.h>
int main(){
	int n, t, i=0, j, a=2;
	scanf("%d", &n);
	t=n;
	while(t>0){
		t/=10;
		i++;
	}
	j=0;
	while(j<i){
		a=a*10;
		j++;
	}
	n=a+n;
	n=n*10+2;
	printf("%d\n", n);
	return 0;
}
