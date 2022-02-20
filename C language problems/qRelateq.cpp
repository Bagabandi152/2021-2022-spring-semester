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
	int q, r;
	printf("Please enter a number:");
	scanf("%d", &q);
	printf("Please enter a number:");
	scanf("%d", &r);
	for(int i=1; i<=q; i++){
		if(q%i==0){
			if(gmd(i, r)) printf("%d ", i);
		}
	}
	return 0;
}
