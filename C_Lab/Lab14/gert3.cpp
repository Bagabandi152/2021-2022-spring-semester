#include <stdio.h>

int *find(int a[][100], int n, int m);

int main(){
	int n, m;
	printf("Husnegtiin muriin hemjee: ");
	scanf("%d", &n);
	printf("Husnegtiin baganiin hemjee: ");
	scanf("%d", &m);
	
	int a[n][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int *p = find(a, n, m);
	int idx;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(*p == a[i][j]){
				idx = i;
				break;
			}	
		}
	}
	
	printf("Hamgiin ih tegsh too aguulsan muriin elementuud:\n");
	for(int i = 0; i < m; i++)
		printf("%d ", a[idx][i]);
	return 0;
}
int *find(int a[][100], int n, int m){
	int mx, tegsh_max =  0;
	int *idx;
	for(int i = 0; i < n; i++){
		mx = a[i][0];
		for(int j = 0; j < m; j++){
			if(mx < a[i][j] && a[i][j]%2 == 0){ 
				mx = a[i][j];
			}
		}
		
		if(mx%2 == 0 && tegsh_max < mx){
			tegsh_max = mx;
			idx = &tegsh_max;
		}
	}
	return idx;
}
