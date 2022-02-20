#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	int n; 
	char s[N];
	printf("Enter length of string: ");
	scanf("%d", &n);
	printf("Enter a string: ");
	scanf("%s", s);
	int l = strlen(s), cnt = 0;
    char ex[] = "hackerrank";
    for(int i=0; i<l; i++){
        if(s[i] == ex[cnt]) cnt++;
    }
    if(cnt == l) printf("YES");
    else printf("NO");
	return 0;
}
