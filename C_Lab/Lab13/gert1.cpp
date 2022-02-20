#include <stdio.h>

void find_min_max(int a[], int n, int *min, int *max);

int main(){
	int n, m, k;
	printf("Length of array: ");
	scanf("%d", &n);
	
	int a[n];
	printf("Enter value of array:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	find_min_max(a, n, &m, &k);
	
	printf("Max element: %d\n", k);
	printf("Min element: %d\n", m);
	
	return 0;
}
void find_min_max(int a[], int n, int *min, int *max){
	int m, k;
	m = a[0];
	k = a[0];
	for(int i = 0; i < n; i++){
		if(m > a[i]) m = a[i];
		if(k < a[i]) k = a[i];
	}
	*min = m;
	*max = k;
}
