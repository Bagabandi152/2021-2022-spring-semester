#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m, arr[10], cnt=0, p=0, tmp;
	printf("n = ");
	scanf("%d",&n);
	m = n;
	while(m>0){
		arr[cnt] = m%10;
		m=m/10;
		cnt++;
	}
	for(int i=cnt-2; i>=0; i--){
		if(arr[i]>5&&arr[i+1]>5){
			tmp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = tmp;
		}
	}
	for(int i=cnt-1; i>=0; i--){
		p = p*10 + arr[i];
	}
	printf("%d\n", p);
	return 0;
}
