#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	int n, cnt = 1; 
	char s[N];
	
	printf("Enter a sentence: ");
	gets(s);
	
	n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] == 32) cnt++;
	}
	
	printf("number of words in sentence: %d ", cnt);
	return 0;
}
