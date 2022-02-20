#include <stdio.h>

struct Rational{
	int d, n;
};

typedef struct Rational Rational;

Rational add(Rational *a, Rational *b);
Rational sub(Rational *a, Rational *b);
Rational mult(Rational *a, Rational *b);
Rational div(Rational *a, Rational *b);
Rational simplify(Rational *a);
void print(Rational *a);
void read(Rational *a);

int main(){
	Rational r1;
	Rational r2;
	
	read(&r1);
	printf("\n");
	read(&r2);
	
	printf("\n\n");	
	r1 = simplify(&r1);
	printf("Ehnii engiin butarhaig emhetgewel:\n");
	print(&r1);

	r2 = simplify(&r2);
	printf("2 dah engiin butarhaig emhetgewel:\n");
	print(&r2);
	
	printf("\n\n");
	printf("\nNiilber: \n");
	Rational sum;
	
	sum = add(&r1, &r2);
	sum = simplify(&sum);
	print(&sum);
	
	printf("\nYalgawar: \n");
	Rational s;
	s = sub(&r1, &r2);
	s = simplify(&s);
	print(&s);
	
	printf("\nUrjwer: \n");
	Rational m;
	m = mult(&r1, &r2);
	m = simplify(&m);
	print(&m);
	
	printf("\nNoogdwor: \n");
	Rational d;
	d = div(&r1, &r2);
	d = simplify(&d);
	print(&d);
	
	return 0;
}

Rational add(Rational *a, Rational *b){
	Rational x;
	x.d = (*a).d*(*b).n + (*b).d*(*a).n;
	x.n = (*a).n*(*b).n;
	return x;
}

Rational sub(Rational *a, Rational *b){
	Rational x;
	x.d = (*a).d*(*b).n - (*b).d*(*a).n;
	x.n = (*a).n*(*b).n;
	return x;
}

Rational mult(Rational *a, Rational *b){
	Rational x;
	x.d = (*a).d*(*a).d;
	x.n = (*a).n*(*b).n;
	return x;
}

Rational div(Rational *a, Rational *b){
	Rational x;
	x.d = (*a).d*(*b).n;
	x.n = (*a).n*(*b).d;
	return x;
}

int gmd(int x, int y){
	while(x != y){
		if(x > y) x = x - y;
		else y = y - x;
	}
	return y;
}

Rational simplify(Rational *a){
	Rational x;
	int g = 1;
	if( a->d > 0 && a->n > 0) g = gmd(a->d, a->n);
	x.d = (a->d)/g;
	x.n = (a->n)/g;
	return x;
}

void print(Rational *a){
	if((*a).n == 1 || (*a).d == 0) printf("%d\n", (*a).d);
	else printf("%d/%d\n", a->d, a->n);
}

void read(Rational *a){
	printf("Engiin butarhaing oruul:(hurtwer/huwaari)\n");
	scanf("%d %d", &(*a).d, &(*a).n);
}
