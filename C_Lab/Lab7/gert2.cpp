#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	printf("Enter a size of array: ");
	scanf("%d", &n);

	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", n - abs(i + j - n + 1));
		}
		printf("\n");
	}
	 
	return 0;
}
