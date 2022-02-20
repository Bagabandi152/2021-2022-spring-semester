#include <stdio.h>
#include <math.h>

typedef struct{
	int d, m, y;
} Date;

Date read();
void print(Date dt);
int uduriin_zuruu(Date a, Date b);
int udur(Date a);

int main(){
	int n;
	printf("On sar udriin toog oruul: ");
	scanf("%d", &n);
	Date a[n];
	
	if(n == 1) printf("On sar udriig oruul:\n");
	else printf("On sar udruudiig oruul:\n");
	for(int i = 0; i < n; i++){
		if(i == 0) printf("\n%d - r on sar udriig oruul:\n", i + 1);
		else printf("%d - r on sar udriig oruul:\n", i + 1);
		a[i] = read();
	}
		
	printf("\nOruulsan on sar udruud:\n");
	for(int i = 0; i < n; i++){
		printf("%d.", i + 1);
		print(a[i]);
	}
	
	for(int i = 0; i < n - 1; i++){
		printf("\n%d, %d - iin udriin zuruu: ", i + 1, i + 2);
		printf("%d", uduriin_zuruu(a[i], a[i + 1]));
	}
	
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
int uduriin_zuruu(Date a, Date b){
	return abs(udur(a) - udur(b));  
}
int udur(Date x){
	int udur_x;
	const int year_day = 365;
	udur_x = year_day*x.y; 
	for(int i  = 1; i < x.m; i++){
		switch(i){
			case 1: case 3: case 5: case 7: case 8: case 10:{
				udur_x += 31;
				break;
			}
			case 2:{
				udur_x += 28;
				break;
			}
			case 4: case 6: case 9: case 11:{
				udur_x += 30;
				break;
			}
		}
	}
	udur_x += x.d;
	
	return udur_x;
}
