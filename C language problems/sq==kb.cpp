#include <stdio.h>
#define N 100


int cniil(int m){
	int s = 0;
	while(m > 0){
		s += m % 10;
		m /= 10;
	}
	return s;
}


void result(int n, int sum){
	int sq = n * n;
	int kb = sum * sum * sum;
	if(sq == kb) printf("%d ", n);
}


int main(){
	int s;
	printf("Respond: ");
	for(int i = 10; i < N; i++){
		s = cniil(i);
		result(i, s);
	}
	return 0;
}
