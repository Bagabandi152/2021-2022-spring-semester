#include <stdio.h>
#define N 100

int main(){
	int n, m, cnt=0;
	int a[N], b[N];
	
	printf("Enter a number of 1st array: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	printf("Enter a number of 2nd array: ");
	scanf("%d", &m);
	
	for(int j=0; j<m; j++)
		scanf("%d", &b[j]);
	
	printf("Intersect element of 1st and 2nd array: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i] == b[j]){
				printf("%d ", a[i]);
				break;
				cnt++;
			}
		}
	}
	
	if(cnt == 0) printf("%d", cnt);
	
	return 0;
}
