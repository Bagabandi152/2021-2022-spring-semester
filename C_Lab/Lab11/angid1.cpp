#include <stdio.h>
#include <math.h>

struct Triangle{
	int a, b, c;
};

typedef struct Triangle triangle;

double area(int x, int y, int z){
	double s, p;
	
	p = x + y + z;
	p = p/2;
	
	s = sqrt(p*(p - x)*(p - y)*(p - z));
	
	return s;
}

int main(){
	triangle t1, t2;
	
	printf("Enter data of first triangle:\n");
	scanf("%d %d %d", &t1.a, &t1.b, &t1.c);
	
	printf("Enter data of first triangle:\n");
	scanf("%d %d %d", &t2.a, &t2.b, &t2.c);
	
	if(area(t1.a, t1.b, t1.c) < area(t2.a, t2.b, t2.c)) printf("2 dah gurwaljin ni 1 deh gurwaljingaas tom.");
	else if(area(t1.a, t1.b, t1.c) == area(t2.a, t2.b, t2.c)) printf("2 gurwaljin tentsuu.");
	else printf("1 deh gurwaljin ni 2 dah gurwaljingaas tom.");
	
	return 0;
}
