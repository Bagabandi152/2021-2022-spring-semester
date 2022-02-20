#include <stdio.h>
#include <string.h>

int check(char u[], char p[]){
	char data[4][22] = {"bat123456", "dorjpassword", "boldpass247", "tsetsgeejustinbeaber"};
	strcat(u, p);
	for(int i = 0; i < 4; i++){
		if(strcmp(u, data[i]) == 0) return 1;
	}
	return 0;
}

int main(){
	char user[100], pass[100];
	
	printf("Enter a username: ");
	scanf("%s", user);
	
	printf("Enter a password: ");
	scanf("%s", pass);
	
	if(check(user, pass)) printf("Success, loging...\n");
	else printf("Wrong username or password. Try again.\n");
	
	
	return 0;
}
