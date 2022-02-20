#include<stdio.h>
int main(){
	int n, m, i, j, mx = 0, s = 0, idx;
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
	for(j=0; j<m; j++){
		for(i=0; i<n; i++){
			s += a[i][j];
			if(s > mx){
				mx = s;
				idx = j;
			}	
		}
		s = 0;
	}
	printf("Greatest sum of elements column: %d", idx + 1);
	return 0;
}
