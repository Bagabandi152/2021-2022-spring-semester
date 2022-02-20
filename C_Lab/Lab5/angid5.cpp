#include <stdio.h>

int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if((j + i)%2 == 0) printf("x");
			else printf("o");
		}
		printf("\n");
	}
	return 0;
}
