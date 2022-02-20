#include <stdio.h>

int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= 2*n - 1; i++){
		if(n - i >= 0){
			for(int j = n - i; j < n; j++){
				printf("x");
			}	
		}else{
			for(int j = i - n; j < n; j++){
				printf("x");
			}
		}
		printf("\n");
	}
	return 0;
}
