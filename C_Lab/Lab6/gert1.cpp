#include <stdio.h>

int main(){
	int n, m, i, j;
	printf("Enter a size of 1st array: ");
	scanf("%d", &n);
	printf("Enter a size of 2nd array: ");
	scanf("%d", &m);
	
	int a[n], b[m];
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < m; i++)
		scanf("%d", &b[i]);
	
	int c[n + m], idx=0;
	
	for(i = 0; i < n; i++)
		c[idx++] = a[i];
	for(i = 0; i < m; i++)
		c[idx++] = b[i];
	printf("United array:\n");
	for(i = 0; i < n + m; i++)
		printf("%d ", c[i]);	
	
	int size = n + m;
	printf("\nDistinct united array:\n");
	for(i = 0; i < size; i++){
		for(j = 0; j < i; j++){
			if(c[i] == c[j]) break;
		}
		if(i == j) printf("%d ", c[i]);
	}
	
	return 0;
}
