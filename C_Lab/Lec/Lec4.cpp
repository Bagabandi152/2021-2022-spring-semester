#include <stdio.h>
#include <math.h>

int main(){
	int n, i, k = 0;
	
	scanf("%d", &n);
	for(i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			k = 1;
			break;
		}
	}
	if(k == 0) printf("%d is a prime.", n);
	else printf("%d is not a prime.", n);
	
	return 0;
}
