#include <stdio.h>

int sum_divisors(int k){
	int sum = 0;
	for(int i = 1; i <= k/2; i++){//k toonii huwaagchiin niilbert k - g uuriig ni oruulaagui
		if(k%i == 0) sum += i;
	}
	return sum;
}
int main(){
	int n, m;
	printf("n = ");
	scanf("%d", &n);
	int mx = 0;
	for(int i = 1; i <= n; i++){
		if(mx < sum_divisors(i)){
			mx = sum_divisors(i);
			m = i;
		}
	}
	
	printf("Huwaagchdiinhan niilber hamgiin ih bh n = %d - ees hetrehgui too: %d", n, m);
	
	return 0;
}
