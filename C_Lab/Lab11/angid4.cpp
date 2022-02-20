#include <stdio.h>

struct Rational{
	int d, n;
};
typedef struct Rational Rational;

Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simplify(Rational a);
void print(Rational a);

int main(){
	Rational r1, r2;
	printf("Ehnii engiin butarhain hurtwer, huwaariig oruul:\n");
	scanf("%d %d", &r1.d, &r1.n);
	printf("2 dah engiin butarhain hurtwer, huwaariig oruul:\n");
	scanf("%d %d", &r2.d, &r2.n);
	
	r1 = simplify(r1);
	printf("Ehnii engiin butarhaig emhetgewel:\n");
	print(r1);
	
	r2 = simplify(r2);
	printf("2 dah engiin butarhaig emhetgewel:\n");
	print(r2);
	
	printf("\nNiilber: \n");
	print(simplify(add(r1, r2)));
	
	printf("\nYalgawar: \n");
	print(simplify(sub(r1, r2)));
	
	printf("\nUrjwer: \n");
	print(simplify(mult(r1, r2)));
	
	printf("\nNoogdwor: \n");
	print(simplify(div(r1, r2)));
	return 0;
}

Rational add(Rational a, Rational b){
	Rational x;
	x.d = a.d*b.n + b.d*a.n;
	x.n = a.n*b.n;
	return x;
}

Rational sub(Rational a, Rational b){
	Rational x;
	x.d = a.d*b.n - b.d*a.n;
	x.n = a.n*b.n;
	return x;
}

Rational mult(Rational a, Rational b){
	Rational x;
	x.d = a.d*b.d;
	x.n = a.n*b.n;
	return x;
}

Rational div(Rational a, Rational b){
	Rational x;
	x.d = a.d*b.n;
	x.n = a.n*b.d;
	return x;
}

int gmd(int x, int y){
	while(x != y){
		if(x > y) x = x - y;
		else y = y - x;
	}
	return y;
}

Rational simplify(Rational a){
	Rational x;
	int g = 1;
	if(a.d > 0 && a.n > 0) g = gmd(a.d, a.n);
	x.d = a.d/g;
	x.n = a.n/g;
	return x;
}

void print(Rational a){
	if(a.n == 1 || a.d == 0) printf("%d\n", a.d);
	else printf("%d/%d\n", a.d, a.n);
}
