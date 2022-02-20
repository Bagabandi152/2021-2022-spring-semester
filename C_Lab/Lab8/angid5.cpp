#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	int n, m;
	char s1[N], s2[N];
	
	printf("Enter 1st string: ");
	scanf("%s", &s1);
	printf("Enter 2nd string: ");
	scanf("%s", &s2);
	
	n = strlen(s1);
	m = strlen(s2);
	
	for(int i = 0; i < m; i++){
		s1[n + i] = s2[i];
	}
	
	printf("%s", s1);
	
	return 0;
}
