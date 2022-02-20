#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, a, b, c, d;
	for(n=1000; n<10000; n++){
		a = n/1000;
		b = (n/100)%10;
		c = (n/10)%10;
		d = n%10;
		if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d) printf("%d ", n);
	}
	return 0;
}
