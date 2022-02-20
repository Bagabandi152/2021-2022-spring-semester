#include <stdio.h>
#include <string.h>

int is_valid(char pwd[]){
	int len = strlen(pwd);
	char num[] = "0123456789";
	char tem[] = "?!$ *()–+";
	int cnt_num = 0, cnt_tem = 0, cnt_up = 0;
	
	for(int i = 0; i < len; i++){
		for(int j = 0; j < strlen(num); j++){
			if(pwd[i] == num[j]) cnt_num++;
		}
		for(int k = 0; k < strlen(tem); k++){
			if(pwd[i] == tem[k]) cnt_tem++;
		}
		if(65 <= pwd[i] && pwd[i] <= 90) cnt_up++;
	}
	if(len < 6) return 1;
	else if(cnt_up < 1) return 2;
	else if(cnt_num < 3) return 3;
	else if(cnt_tem < 1) return 4;
	else return 0;
}
int main(){
	char s[100];
	printf("Enter a password: ");
	gets(s);
	
	int k = is_valid(s);
	
	switch(k){
		case 0: printf("Batalgaajsan."); break;
		case 1: printf("Urt ni ydaj 6 bna."); break;
		case 2: printf("Dor hayaj neg tom useg orson bna."); break;
		case 3: printf("Ydaj 3 shirheg too bn."); break;
		case 4: printf("?, !, $, , *, (, ), –, + temdegtuudees ydaj neg bna."); break;
	}
	
	return 0;
}
