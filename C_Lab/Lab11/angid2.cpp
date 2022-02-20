#include <stdio.h>
#include <math.h>

struct Point {
int x , y ;
};
typedef struct Point point;
double distance(point a, point b);

int main(){
	point A, B;
	printf("Enter data of A point:\n");
	scanf("%d %d", &A.x, &A.y);
	
	printf("Enter data of B point:\n");
	scanf("%d %d", &B.x, &B.y);
	
	printf("Distance between A and B: %.3lf", distance(A, B));
	
	return 0;
}
double distance(point a, point b){
	double d;
	
	d = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
	
	return d;
}
