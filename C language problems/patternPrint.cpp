#include<stdio.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=1; j<=n; j++){
			if(i%2==0){
				printf("%d ", i*n + j);
			}else{
				printf("%d ", i*n + (n + 1 - j));
			}
		}
		printf("\n");
	}
}
