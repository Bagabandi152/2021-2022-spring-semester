#include <stdio.h>

int is_even(int n){
	if(n%2 == 0) return 1;
	else return 0;
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(!(is_even(i))) printf("%d ", i);
	}
	
	return 0;
}
