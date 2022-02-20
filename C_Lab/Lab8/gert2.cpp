#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	int n, m; 
	char s[N], str[N/5];
	
	printf("Enter a sentence: ");
	gets(s);
	
	int idx, cnt, mx = 0, j = 0, c = 0;
	n = strlen(s);
	for(int i = 0; i <= n; i++){
		if(s[i] == ' ' || s[i] == '\0'){
			c++;
			m = strlen(str);
			cnt = 0;
			for(int k = 0; k < m; k++){
				switch(str[k]){
					case 'a': cnt++; break;
					case 'e': cnt++; break;
					case 'o': cnt++; break;
					case 'i': cnt++; break;
					case 'u': cnt++; break;
				}
			}
			if(mx < cnt){
				mx = cnt;
			}
			memset(str, 0, sizeof(str));
			j = 0;
		}else{
			str[j] = s[i];
			j++;
		}
	}
	
	for(int i = 0; i <= n; i++){
		if(s[i] == ' ' || s[i] == '\0'){
			c++;
			m = strlen(str);
			cnt = 0;
			for(int k = 0; k < m; k++){
				switch(str[k]){
					case 'a': cnt++; break;
					case 'e': cnt++; break;
					case 'o': cnt++; break;
					case 'i': cnt++; break;
					case 'u': cnt++; break;
				}
			}
			if(mx == cnt){
				printf("\nHamgiin ig egshigtei ug: %s", str);
				break;
			}
			memset(str, 0, sizeof(str));
			j = 0;
		}else{
			str[j] = s[i];
			j++;
		}
	}
	
	return 0;
}
