#include <stdio.h>

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n%2;
        n /= 2;
        bin += rem*i;
        i *= 10;
    }
    return bin;
}

int palin(long long n){
	long long s = 0, m;
	m = n;
	while(m > 0){
		s = s*10 + m%10;
		m /= 10;
	} 
	
	if(s == n) return 1;
	else return 0;
}

int prime(int k){
	if(k < 2) return 0;
	else{
		if(k == 2) return 1;
		for(int i = 2; i <= k/2; i++){
			if(k%2 == 0) return 0;
		}
		return 1;
	}
}

int main(){
	int n;
	long long bin;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(prime(i)){
			if(palin(convert(i))) printf("%d \n", i);
		}
	}
	
	return 0;
}
