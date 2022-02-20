#include <stdio.h>
#include <math.h>

int main(){
	int n, s;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("primes exist on [1, n]:\n");
	for(int j = 2; j <= n; j++){
		if(j == 2){
			printf("%d ", j);
		}else{
			s = 0;
			for(int i = 2; i <= sqrt(j); i++){
				if(j%i == 0) s++;
			}
			if(s == 0) printf("%d ", j);
		}		
	}

	return 0;
}
