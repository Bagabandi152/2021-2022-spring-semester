#include <stdio.h>
#include <math.h>

int main(){
	int x1, x2, x3, y1, y2, y3;
	
	printf("Enter (x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("Enter (x2, y2): ");
	scanf("%d %d", &x2, &y2);
	printf("Enter (x3, y3): ");
	scanf("%d %d", &x3, &y3);
	
	float a, b, c, mx, mn;
	
	a = sqrt(x1*x1 + y1*y1);
	b = sqrt(x2*x2 + y2*y2);
	c = sqrt(x3*x3 + y3*y3);
	
	if(a > b){
		mx = a;
		mn = b;
	}
	else{
		mx = b;
		mn = a;
	}
	if(c > mx) mx = c;
	if(c < mn) mn = c;
	
	if(mn == a) printf("Oxy ehees hamgiin oir orshih tsegiin koordinate: (%d %d)\n", x1, y1);
	else if(mx == a) printf("Oxy ehees hamgiin hol orshih tsegiin koordinate: (%d %d)\n", x1, y1);
	
	if(mn == b) printf("Oxy ehees hamgiin oir orshih tsegiin koordinate: (%d %d)\n", x2, y2);
	else if(mx == b) printf("Oxy ehees hamgiin hol orshih tsegiin koordinate: (%d %d)\n", x2, y2);
	
	if(mn == c) printf("Oxy ehees hamgiin oir orshih tsegiin koordinate: (%d %d)\n", x3, y3);
	else if(mx == c) printf("Oxy ehees hamgiin hol orshih tsegiin koordinate: (%d %d)\n", x3, y3);
	return 0;
}
