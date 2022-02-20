#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m, k, i, j=28, day;
	printf("Enter years: ");
	scanf("%d", &n);
	printf("Enter months: ");
	scanf("%d", &m);
	printf("Enter days: ");
	scanf("%d", &k);
	if(n>0){
		if(m<13&&m>0){
			if(k>0&&k<32){
				if(n%4 == 0){
					j=29;
				}else if(n%100==0){
					j=29;
				}else if(n%400==0){
					j=28;
				}
				i = (n-1)/4;
				i = i-(n-1)/100;
				i = i-(n-1)/400;
				i = i+(n-1)*365;
				switch(m){
					case 1: day = k;break;
					case 2: day = 31+k; break;
					case 3: day = 31+j+k; break;
					case 4: day = 62+j+k; break;
					case 5: day = 92+j+k; break;
					case 6: day = 123+j+k; break;
					case 7: day = 153+j+k; break;
					case 8: day = 184+j+k; break;
					case 9: day = 215+j+k; break;
					case 10: day = 245+j+k; break;
					case 11: day = 276+j+k; break;
					case 12: day = 307+j+k; break;
					default:break;
				}
				day = day%7;
			}else printf("wrong a number of days!");
		}else printf("wrong a number of month!");
	}else printf("wrong a number of years!");
	printf("%d\n", day); 
	switch(day){
		case 1: printf("Monday");break;
		case 2: printf("Tuesday");break;
		case 3: printf("Wednesday");break;
		case 4: printf("Thursday");break;
		case 5: printf("Friday");break;
		case 6: printf("Saturday");break;
		case 0: printf("Sunday");break;
		default: printf("wrong a number of day");break;
	}
	return 0;
}
