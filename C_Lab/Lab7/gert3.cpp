#include <stdio.h>

int main(){
	int n, m, k;
	
	printf("Enter a number of rows in 1st matrix: ");
	scanf("%d", &n);
	printf("Enter a number of columns in 1st matrix /rows in 2nd matrix/: ");
	scanf("%d", &m);
	printf("Enter a number of columns in 2nd matrix: ");
	scanf("%d", &k);
	
	int A[n][m], B[m][k], C[n][k];
	
	printf("Enter values in 1st matrix: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &A[i][j]);	
		}	
	}
			
	printf("Enter values in 2nd matrix: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++){
			scanf("%d", &B[i][j]);	
		}	
	}
	
	printf("Multiply of the matrix: \n");    
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			C[i][j] = 0;   
			for(int l = 0; l < m; l++){    
				C[i][j]  += A[i][l]*B[l][j];    
			}    
		}    
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			printf("%d ", C[i][j]);	
		}
		printf("\n");
	}
			
	return 0;
}
