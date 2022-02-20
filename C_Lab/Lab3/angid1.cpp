#include <stdio.h>

int main(){
	
	int n;
	printf("Enter years: ");
	scanf("%d", &n);
	
	if(n%4 == 0 && n%100 != 0){
		printf("%d jil undur jil mun." , n);
	}else if(n%400 == 0){
		printf("%d jil undur jil mun." , n);
	}else printf("%d jil undur jil bish." , n);
	
	return 0;
}
