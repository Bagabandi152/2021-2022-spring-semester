#include <stdio.h>

int main(){
	
	int m;
	printf("Enter a number of mounth: ");
	scanf("%d", &m);
	if(m > 0 && m <= 12){
		switch(m){
			case 4: case 6: case 9: case 11: printf("This mounth has 30 days."); break;
			case 2: printf("This mounth has 28 days."); break;
			default: printf("This mounth has 31 days."); break;
		}	
	}else printf("number of mounth is wrong.");
	
	return 0;
}
