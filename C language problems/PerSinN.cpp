#include<stdio.h>
bool perfect(int m){
	int s=0;
	for(int i=1; i<=m/2; i++){
		if(m%i==0) s += i;
	}
	if(s==m) return true;
	else return false;
}
int main(){
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(perfect(i)) printf("%d ", i);
	}
	return 0;
}
