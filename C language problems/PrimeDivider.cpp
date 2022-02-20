#include<stdio.h>
bool prime(int m){
	int s=0;
	if(m==1) return false;
	else if(m==2) return true;
	else{
		for(int i=2; i<=m/2; i++){
			if(m%i==0) s++;
		}
		if(s==0) return true;
		else return false;
	}
}
int main(){
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for(int i=1; i<=n/2; i++){
		if(n%i==0){
			if(prime(i)) printf("%d ", i);
		}
	}
	return 0;
}
