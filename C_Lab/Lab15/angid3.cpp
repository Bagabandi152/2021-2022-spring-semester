#include <stdio.h>
#include <stdlib.h>

int *find_divisors(int n);

int main(){
	int*a;
	int n;
	
	printf("Natural too oruul: ");
	scanf("%d", &n);

	a = find_divisors(n);
	
	for(int i = 0; i <= a[0]; i++){
		if(i == 0) {
			printf("Huwaagchiin too: %d\n", a[i]);
			printf("Huwaagchid: ");
		}
		else printf("%d ", a[i]);
	}
	free(a); 
	return 0;
}

int *find_divisors(int n){
	int *p;
	int cnt = 1;
	p = (int*)malloc(sizeof(int)*n);
	if(p == NULL){	
		printf("Sanax oi xvrsengvi! \n");
		exit(1);
	}
	for(int i = 1; i <= n; i++){
		if(n%i == 0){
			p[cnt++] = i;
		}
	}
	p[0] = cnt - 1;
	return p;
}
