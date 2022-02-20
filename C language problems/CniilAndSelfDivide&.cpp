#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, s=0, k;
	for(n=100; n<1000; n++){
		k = n;
		while(k>0){
			s+=k%10;
			k/=10;
		}
		if(s%7==0&&n%7==0) printf("%d ", n);
	}
	return 0;
}
