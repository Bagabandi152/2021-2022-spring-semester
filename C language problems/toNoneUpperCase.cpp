#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	int l;
	char s[N];
	printf("Enter a string: ");
	scanf("%s", &s);
	
	l = strlen(s);
	
	for(int i=0; i<l; i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i] += 32;
		}
	}
	
	printf("Result: %s\n", s);
	
	return 0;
}
