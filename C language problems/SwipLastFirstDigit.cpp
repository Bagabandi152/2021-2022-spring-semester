#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m, cnt=0, fd, ld, t=1, swp;
	printf("n = ");
	scanf("%d", &n);
	m = n;
	ld = m%10;
	while(m>0){
		fd = m;
		m/=10;
		cnt++;
	}
	for(int i=0; i<cnt-1; i++){
		t=t*10;
	}
	swp = ld*t +(n%t/10)*10+fd;
	printf("%d\n", swp);
	return 0;
}
