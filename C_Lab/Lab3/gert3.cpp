#include <stdio.h>
#define w1 52
#define w2 49
#define height 150
int main(){
	
	int w, h, goodHeight, s;
	
	printf("Enter your weight: ");
	scanf("%d", &w);
	printf("Enter your height /cm/: ");
	scanf("%d", &h);
	
	printf("Are you male? /1 or 0/:");
	scanf("%d", &s);
	
	if(s == 1){
		goodHeight = w1 + (h - height)/(2.5)*1.9;
		if(h == goodHeight) printf("Tanii jin hewiin bn.\n");
		else printf("Tanii jin hewiin bus bn.\n");
	}else{
		goodHeight = w2 + (h - height)/(2.5)*1.7;
		if(h == goodHeight) printf("Tanii jin hewiin bn.\n");
		else printf("Tanii jin hewiin bus bn.\n");
	}
	
	return 0;
}
