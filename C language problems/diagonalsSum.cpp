#include<stdio.h>
int main(){
	int n, m, i, j, s1 = 0, s2 = 0;
	printf("Please enter a number of rows and columns: ");
	scanf("%d", &n); 
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i == j){
				s1 += a[i][j];
			}
			if(i + j == (n - 1)){
				s2 += a[i][j];
			}
		}
	}
	printf("Principle diagonal sum: %d\n", s1);
	printf("Adjasent diagonal sum: %d\n", s2);
	return 0;
}
