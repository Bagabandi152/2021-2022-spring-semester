#include<stdio.h>
#include<stdlib.h>
bool prime(int m){
	int d=0;
	if(m<2) return false;
	else if(m==2) return true;
	else{
		for(int i=2; i<=m/2; i++){
			if(m%i==0) d++;
		}
		if(d==0) return true;
		else return false;
	}
}
int main(){
	int n, s=0;
	printf("n = ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(prime(a[i])==true){
			s = s + a[i];
		}
	}
	printf("Sum of prime numbers in A[n] are %d", s);
	return 0;
}
