#include <stdio.h>
#include <math.h>

struct Triangle{
	int a, b, c;
};

typedef struct Triangle triangle;

double find_area(triangle g){
	double s, p;
	
	p = g.a + g.b + g.c;
	p = p/2;
	
	s = sqrt(p*(p - g.a)*(p - g.b)*(p - g.c));
	
	return s;
}

int main(){
	triangle t1, t2;
	
	printf("Enter data of first triangle:\n");
	scanf("%d %d %d", &t1.a, &t1.b, &t1.c);
	
	printf("Enter data of first triangle:\n");
	scanf("%d %d %d", &t2.a, &t2.b, &t2.c);
	
	if(find_area(t1) < find_area(t2)) printf("2 dah gurwaljinii talbai ih.");
	else if(find_area(t1) == find_area(t2)) printf("2 gurwaljinii talbai tentsuu.");
	else printf("1 deh gurwaljinii talbai ih.");
	
	return 0;
}
