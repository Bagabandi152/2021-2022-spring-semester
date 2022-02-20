#include <stdio.h>
#define N 100

int main(){
	int n, x, idx, a[N];
	
	printf("Enter a size of array: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	printf("Enter a number to find: ");
	scanf("%d", &x);
	
	int cnt = 0;
	
	printf("Position of x:\n");
	for(int i=0; i<n; i++){
		if(x == a[i]){
			printf("%d ", i+1);
			cnt++;	
		}
	}
	if(cnt == 0) printf("%d or not be.", -1);
	
	return 0;
}
