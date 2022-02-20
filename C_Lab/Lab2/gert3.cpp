#include <stdio.h>

int main(){
	float n, per;
	const int all_score = 35;
	
	printf("Enter your scores: ");
	scanf("%f", &n);
	per = n*100/all_score;
	(per<=100&&per>=90)? printf("A"):(per<=89&&per>=80)? printf("B"):(per<=79&&per>=70)? printf("C"):(per<=69&&per>=60)? printf("D"):printf("F");
	
	return 0;
}
