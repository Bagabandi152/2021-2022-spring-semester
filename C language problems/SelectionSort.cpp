#include<stdio.h>
void print(int n, int a[]){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n, idx, min;
	printf("Please enter a number of array member: ");
	scanf("%d", &n);
	int a[n-1];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);	
	}
	for(int i=0; i<n-1; i++){
		idx = i;
		min = a[i];
		for(int j=i+1; j<n; j++)
			if(a[j] < min){
				idx = j;
				min = a[j];	
			}
			if(idx != i){
				a[idx] = a[i];
				a[i] = min;
			}
	}
	print(n, a);
	return 0;
}
