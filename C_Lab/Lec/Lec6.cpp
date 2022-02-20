#include <stdio.h>
#include <string.h>

int main(){
	char ch[27] = " ";
	char str[2];
	int n; 
	str[1] = '\0';
	for(int n = 97; n < 123; n++){
		str[0] = n;
		strcat(ch, str);
		printf("\n %s", ch);	
	}
	return 0;
}
