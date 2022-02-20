#include <stdio.h>

int main(){
	int n, s;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("if n | x*x - y*y then x, y\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			s = i*i - j*j;
			if(s%n == 0){
				printf("%d | %d - %d then %d, %d\n", n, i*i, j*j, i, j);
			}
		}
	}
	
	return 0;
}
