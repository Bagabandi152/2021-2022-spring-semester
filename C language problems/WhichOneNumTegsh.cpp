#include<stdio.h>
int main(){
	int a, b, c, d, p;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	p = a*b*c*d;
	if(p%2==0) printf("Yes");
	else printf("No");
	return 0;
}
