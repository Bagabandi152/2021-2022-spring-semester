#include <stdio.h>
struct Triangle {
	int a, b, c;
};

void read(struct Triangle *p)
{
	printf("Enter A side of triangle: ");
	scanf("%d", &p -> a);
	printf("Enter B side of triangle: ");
	scanf("%d", &p -> b);
	printf("Enter C side of triangle: ");
	scanf("%d", &p -> c);
}
int main ()
{
	struct Triangle g;
	read(&g);
	printf("Given triangle data: \n");
	printf("a = %d\n", g.a);
	printf("b = %d\n", g.b);
	printf("c = %d\n", g.c);
	return 0;
}

