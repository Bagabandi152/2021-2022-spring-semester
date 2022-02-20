#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	int n, m, cnt = 0;
	char s1[N], s2[N];
	
	printf("Enter 1st string: ");
	scanf("%s", &s1);
	printf("Enter 2nd string: ");
	scanf("%s", &s2);
	
	n = strlen(s1);
	m = strlen(s2);
	
	if(n == m){
		for(int i = 0; i < n; i++){
			if(s1[i] == s2[i]) cnt++;
		}
		if(cnt == n) printf("Strings are a same.");
		else printf("Strings are not a same.");
	}else printf("Strings are not a same.");
	
	return 0;
}
