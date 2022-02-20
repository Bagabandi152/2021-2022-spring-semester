#include<stdio.h>
int main(){
	int n, m, i, j;
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
	for(i=0; i<n; i++){
		if(i%2==1){
			for(j=0; j<m; j++)
				printf("%d ", a[i][j]);	
			printf("\n");
		}else{
			for(j=m-1; j>=0; j--)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0; 
}
