#include<stdio.h>
bool prime(int m){
	int s=0;
	if(m==1) return false;
	else if(m==2) return true;
	else{
		for(int i=2; i<=m/2; i++){
			if(m%i==0){
				s++;
			}
		}
		if(s==0) return true;
		else return false;
	}
}
int main(){
	int i, sum, a, b;
	for(i=100; i<1000; i++){
		a = i/100;
		b = i/10%10;
		sum = a + b;
		if(prime(sum)) printf("%d ", i);	
	}
	return 0;
}
