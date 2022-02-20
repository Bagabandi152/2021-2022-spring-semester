#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter sides fo triangle: \n");
	scanf("%d %d %d", &a, &b, &c);
	bool t2 = (a == b)||(b == c)||(c == a);
	bool t1 = (a == b)&&(b == c)&&(c == a);
	(t1)? printf("zuw gurwaljin\n"):(t2)? printf("adil hajuut gurwaljin\n"):printf("Eldew talt gurwaljin");
	
	return 0;
}
