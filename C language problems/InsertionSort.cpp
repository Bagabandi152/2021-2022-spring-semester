#include<stdio.h>
void print(int N, int a[]){
	for(int i=0; i<N; i++)
		printf("%d ", a[i]);
}
int main(){
	int a[] = {2, 23, 45, 12, 5, 34, 10};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=1; i<n; i++){
		int key = a[i];
		int j = i-1;
		while(j>=0&&key<a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1]= key;
		print(n, a);
		printf("\n");
	}
	print(n, a);
	return 0;
}
