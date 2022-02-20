#include <stdio.h>
#include <string.h>
#define N 100

int main() {
	char s1[N];
	char s2[N/5], str[N/5];
	memset(str, 0, sizeof(str));
	
	printf("Enter a string: ");
	gets(s1);
	
	printf("Enter a word: ");
	scanf("%s", s2);

	int i = 0,  j = 0, k = 0, cnt = 0, m = 0;
	
	int len = strlen(s2);
	
	printf("Tsuwaan dah ugiin bairlal: \n");
	while(i <= strlen(s1)){
		
		if(strlen(str) == len){
			cnt++;
			if(strcmp(str, s2) == 0){
				printf("%d\n", i - len);
				m++;
			}
			i = cnt;
			memset(str, 0, sizeof(str));
			k  = 0;
		}else{
			str[k] = s1[i];
			k++;
			i++;
		}
	}
	if(m == 0) printf("-1");
   return 0;
}
