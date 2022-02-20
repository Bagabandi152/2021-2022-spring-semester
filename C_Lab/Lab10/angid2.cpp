#include <stdio.h>

int count(int n){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(n%i == 0) cnt++;
	}
	return cnt;
}

int main(){
	int n; 
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("%d huwaagchiin too: %d\n", i, count(i));
	}
	
	return 0;
}
