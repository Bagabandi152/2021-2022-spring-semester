#include<stdio.h>
int main(){
	int n, cnt=0, s=0;
	float A;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(i%2!=0){
			s+=a[i];
			cnt++;
		}
	}
	A = (double)s/cnt;
	printf("%.2f", A);
	return 0;
}
