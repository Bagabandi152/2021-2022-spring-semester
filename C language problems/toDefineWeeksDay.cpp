#include <stdio.h>
int main(){
	int j = 28, n, m, k;
	printf("Enter years: ");
	scanf("%d", &n);
	printf("Enter months: ");
	scanf("%d", &m);
	printf("Enter days: ");
	scanf("%d", &k);
	//1-31 2-28 3-31 4-30 5-31 6-30 7-31 8-31 9-30 10-31 11-30 12-31
	int i=1, d;
	if(n>1){
		while(i==n-1&&n-1>0){
			if((i%4==0&&i%100!=0)||(i%400==0)) j=29;
			d = d + j;
		}	
	}else if(n<0) printf("This year has no!");
	i=1;
	if(m>0&&m<=12){
		d=337;
		while(i==m-1&&m-1>0){
			if((n%4==0&&n%100!=0)||(n%400==0)) j=29;
			else j=28;
			switch(i){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12: d = d + 31; break;
				case 2: d =  d + j; break;
				case 4: case 6: case 9: case 11: d = d + 30; break;
				default: printf("This month number has no!"); break;
			}
		}		
	}else printf("This month has no!");
	if(k>0&&k<=31){
		d = d + k;
	}else printf("This day has no!");
	int r;
	r = d%7;
	switch(r-1){
		case 1: printf("Monday"); break;
		case 2: printf("Tuesday"); break;
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
		case 0: printf("Sunday"); break;
		defualt: printf("This week number has no!"); break;
	}
	return 0;
}
