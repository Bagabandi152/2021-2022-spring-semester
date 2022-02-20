#include <stdio.h>

typedef struct{
	int d, m, y;
} Date;

Date read();
void print(Date dt);

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
