#include <stdio.h>
#include <math.h>

typedef struct {
	int dim;
	float dat [100];
}Vector;

float dot_product(Vector a, Vector b);
Vector scalar_mult_float(Vector a, float t);
Vector scalar_mult_int(Vector a, int t);
float len(Vector a);

int main(){
	
	Vector X, Y;
	printf("Vector 1 - iin elementiin toog oruul: ");
	scanf("%d", &X.dim);
	
	printf("Vector 1 - iin utguudiig oruul:\n");
	for(int i = 0; i < X.dim; i++){
		scanf("%f", &X.dat[i]);
	}
	
	printf("Vector 2 - iin elementiin toog oruul: ");
	scanf("%d", &Y.dim);
	
	printf("Vector 2 - iin utguudiig oruul:\n");
	for(int i = 0; i < Y.dim; i++){
		scanf("%f", &Y.dat[i]);
	}
	
	printf("\nVectoriin dot urjwer : %.3f", dot_product(X, Y));
	printf("\nX vectoriin urt : %.3f", len(X));
	printf("\nY vectoriin urt : %.3f\n", len(Y));
	
	printf("\nVectoruudiig scalar(1x1 vector) - aar urjih heseg: \n");
	Vector R;
	int m;
	float k;
	printf("Float scalar oruul: ");
	scanf("%f", &k);
	
	R = scalar_mult_float(X, k);
	printf("Result:\n");
	printf("X = ");
	for(int i = 0; i < R.dim; i++){
		if(i == 0) printf("<%.3f", R.dat[i]);
		else printf(",%.3f", R.dat[i]);
		
		if(i == R.dim - 1) printf(">");
	}
	R = scalar_mult_float(Y, k);
	printf("\nY = ");
	for(int i = 0; i < R.dim; i++){
		if(i == 0) printf("<%.3f", R.dat[i]);
		else printf(",%.3f", R.dat[i]);
		
		if(i == R.dim - 1) printf(">");
	}
	
	printf("\n\nInt scalar oruul: ");
	scanf("%d", &m);
	
	R = scalar_mult_int(X, m);
	printf("Result:\n");
	printf("X = ");
	for(int i = 0; i < R.dim; i++){
		if(i == 0) printf("<%.3f", R.dat[i]);
		else printf(",%.3f", R.dat[i]);
		
		if(i == R.dim - 1) printf(">");
	}
	
	R = scalar_mult_int(Y, m);
	printf("\nY = ");
	for(int i = 0; i < R.dim; i++){
		if(i == 0) printf("<%.3f", R.dat[i]);
		else printf(",%.3f", R.dat[i]);
		
		if(i == R.dim - 1) printf(">");
	}
	
	return 0;
}
float dot_product(Vector a, Vector b){
	float s = 0;
	if(a.dim == b.dim){
		int n = a.dim;
		for(int i = 0; i < n; i++){
			s += a.dat[i]*b.dat[i];
		}
	}
	return s;
}
float len(Vector a){
	float p = 0;
	
	for(int i = 0; i < a.dim; i++){
		p += a.dat[i]*a.dat[i];
	}
	return sqrt(p);
}

Vector scalar_mult_float(Vector a, float t){
	for(int i = 0; i < a.dim; i++){
		a.dat[i] *= t;
	}
	return a;
}

Vector scalar_mult_int(Vector a, int t){
	for(int i = 0; i < a.dim; i++){
		a.dat[i] *= t;
	}
	return a;
}
