#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(){
	int a, b, c, sum, mx = 0;
	for(int a=1; a<=N; a++){
		for(b=1; b<=N; b++){
			for(c=1; c<=N; c++){
				bool con = ((2*b + 1)%a == 0 && (2*c + 1)%b == 0 && (2*a + 1)%c == 0);
				if(con){
					sum = a + b + c;
					if(sum > mx){
						mx = sum;
					}
				}
			}
		}
	}
	printf("Figured out: %d", sum);
	return 0;
}
