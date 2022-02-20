#include<stdio.h>
int main(){
	int n = 3, m = 3, i, j, x, y;
	
	printf("Enter a number of row: ");
	scanf("%d", &n);
	
	printf("Enter a number of columns: ");
	scanf("%d", &m);
	
	int a[n][m];
	
	printf("Enter index of element: ");
	scanf("%d%d", &x, &y);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Given element: %d\n", a[x-1][y-1]);
	printf("Adjasent elements: ");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if((i + 1) == x){
				if((j + 1) == (y - 1)){
					printf("%d ", a[i][j]);
				}else if((j + 1) == (y + 1)){
					printf("%d ", a[i][j]);
				}
			}else if((i + 1) == (x - 1)){
				if((j + 1) == y){
					printf("%d ", a[i][j]);
				}else if((j + 1) == (y - 1)){
					printf("%d ", a[i][j]);
				}else if((j + 1) == (y + 1)){
					printf("%d ", a[i][j]);
				}
			}else if((i + 1) == (x + 1)){
				if((j + 1) == y){
					printf("%d ", a[i][j]);
				}else if((j + 1) == (y + 1)){
					printf("%d ", a[i][j]);	
				}else if((j + 1) == (y - 1)){
					printf("%d ", a[i][j]);
				}
			}
		}
	}
	return 0;
}
