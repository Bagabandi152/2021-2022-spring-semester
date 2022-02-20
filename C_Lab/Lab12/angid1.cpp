#include <stdio.h>

typedef struct{
	int d, m, y;
} Date;

Date read();
void print(Date dt);
int less(Date a, Date b);

int main(){
	printf("On sar udriig oruul\n");
	Date x = read();
	printf("\nOn sar udriig oruul\n");
	Date y = read();
	
	printf("\nEhnii on, sar, udur:\n");
	print(x);
	printf("\n2 dah on, sar, udur:\n");
	print(y);
	
	if(less(x, y)) printf("\nEhnii on, sar, udur ni 2 dah on, sar, udruus deerh uyiinh bna.");
	else printf("\n2 dah on, sar, udur ni 1 deh on, sar, udruus deerh uyiinh bna.");
	
	return 0;
}

Date read(){
	Date date;
	printf("Enter a year: ");
	scanf("%d", &date.y);
	printf("Enter a month: ");
	scanf("%d", &date.m);
	printf("Enter a day: ");
	scanf("%d", &date.d);
	
	return date;
}

void print(Date dt){
	if(dt.y < 10) printf("000%d", dt.y);
	else if(dt.y < 100) printf("00%d", dt.y);
	else if(dt.y < 1000) printf("0%d", dt.y);
	else printf("%d", dt.y);
	if(dt.m < 10) printf("/0%d", dt.m);
	else printf("/%d", dt.m);
	if(dt.d < 10) printf("/0%d", dt.d);
	else printf("/%d\n", dt.d);
}

int less(Date a, Date b){
	if(a.y < b.y) return 1;
	else if(a.y == b.y){
		if(a.m < b.m) return 1;
		else if(a.m == b.m){
			if(a.d < b.d) return 1;
			else return 0;
		}else return 0;
	}else return 0;
}
