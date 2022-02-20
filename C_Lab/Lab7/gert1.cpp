#include <stdio.h>

int main(){
	
	int n, m;
	printf("Enter a size of rows in array: ");
	scanf("%d", &n);
	printf("Enter a size of columns in array: ");
	scanf("%d", &m);
	
	int a[n][m];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
	 
	return 0;
}
