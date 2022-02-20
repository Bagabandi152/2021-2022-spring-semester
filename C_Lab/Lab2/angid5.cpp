#include <stdio.h>

int main(){
	int a, b, c, d, mx, mn, md;
	
	scanf("%d %d %d", &a, &b, &c);
	
	(a > b)? mx = a: mx = b;
	(mx < c)? mx = c: mx;
	printf("Max: %d\n", mx);
	
	(a > b)? mn = b: mn = a;
	(mn > c)? mn = c: mn;
	printf("Min: %d\n", mn);
	
	(mn != b && mx != b)? md = b: (mn != a && mx != a)? md = a: (mn != c && mx != c)? md = c: md;
	printf("Mid: %d", md);
	
	return 0;
}
