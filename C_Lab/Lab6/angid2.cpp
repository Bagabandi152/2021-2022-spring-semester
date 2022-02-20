#include <stdio.h>
#define N 100

int main(){
	int n;

	printf("Enter a size of array: ");
	scanf("%d", &n);
	
	int a[N];
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1; i>=0; i--)
		printf("%d ", a[i]);
		
	return 0;
}
