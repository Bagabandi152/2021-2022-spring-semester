#include <stdio.h>
#include <string.h>
#define N 100

int count(char s[]){
	int cnt = 0;
	char vowels[] = "aeiouAEIOU";
	int  l  = strlen(s);
	for(int i = 0; i < l; i++){
		for(int j = 0; j < strlen(vowels); j++){
			if(s[i] == vowels[j]) cnt++;
		}
	}
	return cnt;
}


int main(){
	
	char s[N];
	
	printf("Entee a string: ");
	scanf("%s", s);
	
	int cnt = count(s);
	
	printf("Ugugdsun string %d egshigtei.", cnt);	
	return 0;
}
