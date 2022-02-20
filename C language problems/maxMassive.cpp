#include<stdio.h>
int main(){
	int n, m, i, j, mx, idx, idy;
	printf("Please enter a number of rows: ");
	scanf("%d", &n); 
	printf("Please enter a number of columns: ");
	scanf("%d", &m);
	int a[n][m];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	mx = a[i][j];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mx<a[i][j]){
				mx = a[i][j];
				idx = i;
				idy = j;
			}
		}
	}
	printf("Max element of A matrix : %d, position: A(%d, %d)", mx, idx + 1, idy + 1);
	return 0;
}
