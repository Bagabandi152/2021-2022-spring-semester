#include <stdio.h>
int ctoo(int m){
	int cnt=0;
	while(m>0){
		m/=10;
		cnt++;
	}
	return cnt;
}
int dev(int m, int j){
	int  p=1;
	for(int i=0; i<j; i++){
		p*=m;
	}
	return p;
}
void result(int m, int cnt){
	int sum=0, r, p;
	int t=m;
	while(t>0){
		r=t%10;
		p = dev(r, cnt);
		sum += p;
		t/=10;
	}
	if(sum == m) printf("%d ", m);
}
int main(){
	int t;
	for(int i=10; i<=9999; i++){
		t = ctoo(i);
		result(i, t);
	}
	return 0;
}
