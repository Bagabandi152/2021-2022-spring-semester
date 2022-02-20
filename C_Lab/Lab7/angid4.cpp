#include <stdio.h>

int main(){
	
	int n, m, mx = 0;
	
	printf("Enter a size of rows in array: ");
	scanf("%d", &n);
	printf("Enter a size of columns in array: ");
	scanf("%d", &m);
	
	int a[n][m];
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	
	int idx;		
	for(int j = 0; j < m; j++){
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(a[i][j]%2 == 0) cnt++;
		}
		if(cnt > mx){
			mx = cnt;
			idx = j;
		}
	}
	
	printf("Hamgiin ih tegsh too aguulsan bagana: %d", idx + 1);
	return 0;
}
