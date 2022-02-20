#include <stdio.h>
#define N 100

int main(){
	int n, m, x;
	int a[N][N];
	
	printf("Enter a number of row: ");
	scanf("%d", &n);
	
	printf("Enter a number of col: ");
	scanf("%d", &m);
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &a[i][j]);
	
	printf("Enter a number to find: ");
	scanf("%d", &x);
	
	printf("Given array:\n");
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	int cnt=0;
	
	printf("Position of x (row, col):\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(x == a[i][j]){
				printf("(%d, %d) ", i+1, j+1);
				cnt++;	
			}
		}
	}
	
	if(cnt == 0) printf("%d or not be.", -1);
	
	return 0;
}
