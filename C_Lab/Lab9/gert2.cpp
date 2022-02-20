#include <stdio.h>

int digit_sum(int n){
	int s = 0;
	while(n > 0){
		s = s + n%10;
		n /= 10;
	}
	return s;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int s;
	printf("[%d, %d] zawsart orshih digit_sum - daa huwaagddag toonuud: \n", 1, n);
	for(int i = 1; i <= n; i++){
		s = digit_sum(i);
		if(i%s == 0) printf("%d ", i);
	}
	
	return 0;
}
