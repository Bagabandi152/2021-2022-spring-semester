#include <stdio.h>
#include <string.h>
char* decToHexa(int n, int k){
	int r; 
	char s[] = "";
	char ch;
	while(n!=0){
		r = n%k;
		n = n/k;
		switch(r){
			case 10: ch = 'A'; break;
			case 11: ch = 'B'; break;
			case 12: ch = 'C'; break;
			case 13: ch = 'D'; break;
			case 14: ch = 'E'; break;
			case 15: ch = 'F'; break;
			default: ch = r; break;
		}
		s = s + ch;
	}
	return s;
}

long decToK(int n, int k){
	int r, i=1, m=0;
	while(n!=0){
		r = n%k;
		n = n/k;
		m = m + i*r;
		i*=10;
	}
	return m;
}

int main(){
	int n, k;
	printf("Enter a number in decimal: ");
	scanf("%d", &n);
	printf("Enter to convert numberic system: ");
	scanf("%d", &k);
	if(k == 16){
		char* m = decToHexa(n, k);
		printf("Result: %s\n", m);
	}else{
		long m = decToK(n, k);
		printf("Result: %ld\n", m);
	}
	return 0;
}
