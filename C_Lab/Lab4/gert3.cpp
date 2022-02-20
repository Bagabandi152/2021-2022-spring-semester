#include <stdio.h>

int main(){
	int day = 1;
	
	printf("Calendar: Mar, 2021\n");
	printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
	
	while(day <= 31){
		if(day == 1) printf("%d%c\t", day,'p');
		else if(day == 8) printf("%d%c\t", day, 'w');
		else if(day == 18) printf("%d%c\t", day, 's');
		else printf("%d\t", day);
		if(day%7 == 0) printf("\n");
		day++;
	}
	printf("\np - Patriots' day\n");
	printf("w - International Woman's day\n");
	printf("s - Soldiers' day");
	
	return 0;
}
