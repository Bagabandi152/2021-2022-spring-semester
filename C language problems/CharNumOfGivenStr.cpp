#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	int l, cnt, k = 0;
	char s[N], q[N];
	printf("Enter a string: ");
	scanf("%s", &s);
	
	l = strlen(s);
	q[k] = '\0';
	
	for(int i=0; i<l; i++){
		char ch = s[i];
		cnt = 1;
		if(strchr(q, ch) == NULL){
			for(int j=i+1; j<l; j++)
				if(ch == s[j]) cnt++;
			printf("%c character has %d times\n", ch, cnt);
		}
		q[k] = ch;
		q[k + 1] = '\0';
		k++;
	}
	
	return 0;
}
