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
	int n, k=0, cnt=0;
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
	for(int i=0; i<=k; i++){
		cnt = 0;
		for(int j=0; j<n; j++){
			if(b[i] == a[j]) cnt++;
		}
		printf("Element: %d Count: %d\n", b[i], cnt);
	}
	return 0;
}
