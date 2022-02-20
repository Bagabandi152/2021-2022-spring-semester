#include <stdio.h>
#define years 2021
#define mounths 2
#define days 16
int main(){
	
	int y, m, d;
	
	printf("Enter years: ");
	scanf("%d", &y);
	printf("Enter mounths: ");
	scanf("%d", &m);
	printf("Enter days: ");
	scanf("%d", &d);
	
	if(y - years > 0){
		printf("This time is the future.");
	}else if(y - years == 0){
		if(m - mounths > 0) printf("This time is the future.");
		else if(m - mounths == 0){
			if(d - days > 0)printf("This time is the future.");
			else if(d - days == 0) printf("This time is today.");
			else printf("This time is the past."); 
		}else{
			printf("This time is the past.");
		}
	}else{
		printf("This time is the past.");
	}
	
	return 0;
}
