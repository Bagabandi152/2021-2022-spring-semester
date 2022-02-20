#include <stdio.h>
#include <math.h>

typedef struct {
	int x, y;
}Point;

typedef struct {
	Point A, B, C;
}Triangle_P;

double distance(Point a, Point b){
	double d;
	
	d = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
	
	return d;
}

double find_area(Triangle_P g){
	double a, b, c, s, p;
	
	a = distance(g.A, g.B);
	b = distance(g.B, g.C);
	c = distance(g.C, g.A);
	
	p = (a + b + c)/2;
	
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	
	return s;
}

int main(){
	Point A, B, C;
	printf("Enter data of A point of triangle:\n");
	scanf("%d %d", &A.x, &A.y);
	
	printf("Enter data of B point on triangle:\n");
	scanf("%d %d", &B.x, &B.y);
	
	printf("Enter data of C point in triangle:\n");
	scanf("%d %d", &C.x, &C.y);
	
	Triangle_P t;
	
	t.A = A;
	t.B = B;
	t.C = C;
	
	printf("Area of triangle: %.3lf", find_area(t));
	
	return 0;
}
