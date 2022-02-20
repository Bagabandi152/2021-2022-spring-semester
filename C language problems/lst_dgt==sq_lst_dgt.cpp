#include <stdio.h>


int main(){
	int n, lst_dgt_n, lst_dgt, sq;
	
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("Respond: ");
	
	
	for(int i = 1; i <= n; i++){
		lst_dgt_n = i % 10;
		sq = i * i;
		lst_dgt = sq % 10;
		if(lst_dgt_n == lst_dgt) printf("%d ", i);
	}
	
	
	return 0;
} 
