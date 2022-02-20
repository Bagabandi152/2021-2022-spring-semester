#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	char s[N];
	int l, cnt = 0;
	
	printf("Enter a string: ");
	scanf("%s", &s);
	
	l = strlen(s);
	for(int i = 0; i < l; i++){
		switch(s[i]){
			case 'a': cnt++; break;
			case 'o': cnt++; break;
			case 'e': cnt++; break;
			case 'u': cnt++; break;
			case 'i': cnt++; break;
		}
	} 
	
	printf("Ugugdsun string %d egshigtei.", cnt);
	return 0;
}
