#include<stdio.h>
int main(){
	int n, i, j;
	
	printf("Enter a size of square matrix: ");
	scanf("%d", &n);
	
	int a[n][n];
	printf("Enter values of square matrix: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Given square matrix: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	int k = 0, l = 0;
	int last_row = n - 1, last_col = n - 1; 

	printf("Spiral print result: \n");  
    while (k <= last_row && l <= last_col) { 
        for (i = l; i <= last_col; i++) { 
            printf("%d ", a[k][i]); 
        } 
        k++; 
  

        for (i = k; i <= last_row; i++) { 
            printf("%d ", a[i][last_col]); 
        } 
        last_col--; 
        
        
        if (k <= last_row) { 
            for (i = last_col; i >= l; i--) { 
                printf("%d ", a[last_row][i]); 
            } 
            last_row--; 
        }
		
		 
        if (l <= last_col) { 
            for (i = last_row; i >= k; i--) { 
                printf("%d ", a[i][l]); 
            } 
            l++; 
        } 
    }
    return 0;
}
