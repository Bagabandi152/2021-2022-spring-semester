#include <stdio.h>

int main(){
	int n,m;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int a[n][n];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
			
	int sum_row, sum_col;
	printf("Each row sum:\n");
	for(int i=0; i<n; i++){
		sum_row = 0;
		for(int j=0; j<n; j++){
			sum_row += a[i][j];
		}
		printf("\t%d", sum_row);
	}
	
	printf("\nEach column sum:\n");
	for(int j=0; j<n; j++){
		sum_col = 0;
		for(int i=0; i<n; i++){
			sum_col += a[i][j];
		}
		printf("\t%d", sum_col);
	}
	
	int sum_dl = 0, sum_dr = 0;
	
	printf("\nLeft diagonali sum:\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j) sum_dl += a[i][j];
			if(i + j == n - 1) sum_dr += a[i][j];
		}
	}
	printf("\t%d", sum_dl);
	printf("\nRight diagonali sum:\n");
	printf("\t%d", sum_dr);
	return 0;
}
