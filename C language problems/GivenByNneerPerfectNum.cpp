#include<stdio.h>
#include<stdlib.h>
bool perfect(int m){
	int sum = 0;
	for(int i=1; i<=m/2; i++){
		if(m%i == 0){
			sum = sum + i;
		}
	}
	if(sum == m)return true;	
	else return false;
}
int main(){
	int n, p, s=0, per, k;
	printf("n = ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		p = n - i;
		k = n + i;
		if(perfect(p)){
			per = p;
			i = n;
		}
		if(perfect(k)){
			per = k;
			i = n;
		}
	}
	printf("given by %d near perfect number %d ", n, per);
	return 0;
}
