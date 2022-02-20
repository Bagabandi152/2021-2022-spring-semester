#include<stdio.h>

void print(int N, int a[]){
	for(int i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int main(){
	int a[] = {2, 23, 45, 12, 5, 34, 10};
	int n = sizeof(a)/sizeof(a[0]);
	int tmp;
	bool swapped;
	do{
		swapped = 0;
		for(int i=0; i<n-1; i++)
			if(a[i]>a[i+1]){
				tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
				swapped = 1;
			}		
	}while(swapped);
	print(n, a);
	return 0;
}
