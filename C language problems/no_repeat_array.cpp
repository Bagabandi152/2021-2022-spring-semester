#include<stdio.h>
bool search(int m, int k, int b[]){
	int s=0;
	for(int i=0; i<=k; i++){
		if(m == b[i]) s++;
	}
	if(s == 0) return true;
	else return false;
}
int main(){
	int n, k=0;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int a[n], b[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	b[k] = a[0];
	bool exist;
	for(int i=0; i<n; i++){
		int m = a[i];
		exist = search(m, k, b);
		if(exist){
			b[++k] = m;
		}
	}
	for(int i=0; i<=k; i++)
		printf("%d ", b[i]);
	return 0;
}
