#include<stdio.h>
#include<stdlib.h>
int digit_sum(int m){
	int s=0;
	while(m>0){
		s = s + m%10;
		m = m/10;
	}
	return s;
}
int main(){
	int sum, k, i, s;
	for(i=10; i<100; i++){
		s = digit_sum(i);
		sum = s + s*s;
		if(sum == i) printf("%d ",i);
	}
	return 0;
}
