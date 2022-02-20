#include<stdio.h>
#include<stdlib.h>
int main(){
	int p, i=0, s=1;
	printf("p = ");
	scanf("%d", &p);
	while(1){
		i++;
		s = s*i;
		if(s==p){
			printf("%d ", i);
			break;
		}
	}
	return 0;
}
