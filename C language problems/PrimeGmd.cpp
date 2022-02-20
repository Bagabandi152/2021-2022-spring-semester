#include<stdio.h>
bool gmd(int m, int k){
	while(m!=k){
		if(m>k) m = m - k;
		else k = k - m;
	}
	if(m==1) return true;
	else return false;
}
int main(){
	int n; 
	printf("Please enter a number: ");
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		if(gmd(i, n)) printf("%d ", i);
	}
	return 0;
}
