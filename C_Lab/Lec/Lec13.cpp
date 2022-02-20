#include <stdio.h>
#include <string.h>
union ascii{
	int a;
	char c;
};

typedef union ascii ascii;
typedef enum{
	NO,
	YES
}option; 

int main(){
	ascii k;
	option p;
	char res[5];
	printf("Do you print uppercase letter of Englsih?/YES or NO/: ");
	scanf("%s", res);
	
	if(strcmp(res, "YES") == 0) p = YES;
	else p = NO;
	
	if(p){
		printf("Uppercase letter of Englsih:\n");
		for(int i = 0; i < 26; i++){
			k.a = 65 + i;
			printf("%c ", k.c);
		}
	}else{
		printf("Lowercase letter of Englsih:\n");
		for(int i = 0; i < 26; i++){
			k.a = 97 + i;
			printf("%c ", k.c);
		}
	}
	return 0;
}
