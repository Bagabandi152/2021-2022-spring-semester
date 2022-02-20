#include<stdio.h>

bool palin(int n);

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(palin(n)) printf("%d ni palindrom too.", n);
	else printf("%d ni palindrom too bish.", n);
	
	return 0;
}
bool palin(int n){
	int s = 0,  m;
	m = n;
	while(n > 0){
		s = s*10 + n%10;
		n /= 10;
	}
	if(s == m) return 1;
	else return 0;
}
