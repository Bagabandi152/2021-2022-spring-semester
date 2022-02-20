#include <stdio.h>
#define N 100

int main(){
	int n, m, a[N], b[N];
	printf("Enter a size of 1st array: ");
	scanf("%d", &n);
	
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter a size of 2nd array: ");
	scanf("%d", &m);
	
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	
	int c[n+m];
	
	for(int i=0; i<n; i++)
		c[i] = a[i];
	for(int i=n, j=0; i<n+m; i++, j++)
		c[i] = b[j];
		
	printf("United array:\n");
	for(int i=0; i<n+m; i++)
		printf("%d ", c[i]);
		
	return 0;
}
