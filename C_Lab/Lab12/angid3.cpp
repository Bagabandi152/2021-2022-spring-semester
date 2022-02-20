#include <stdio.h>

typedef struct{
	int d, m, y;
} Date;

Date read();
void print(Date dt);
int less(Date a, Date b);
void sort(Date a[] , int n);

int main(){
	int m;
	printf("On sar udriin toog oruul: ");
	scanf("%d", &m);
	Date b[m];
	
	if(m == 1) printf("On sar udriig oruul:\n");
	else printf("On sar udruudiig oruul:\n");
	for(int i = 0; i < m; i++){
		if(i == 0) printf("\n%d - r on sar udriig oruul:\n", i + 1);
		else printf("%d - r on sar udriig oruul:\n", i + 1);
		b[i] = read();
	}
	
	sort(b, m);

	printf("\nOruulsan on sar udruud:(usuhuur erembelsen)");
	for(int i = 0; i <m; i++){
		printf("\n%d.", i + 1);
		print(b[i]);
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
	else printf("/%d", dt.d);
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
void sort(Date a[] , int n){
	int tmp, tmp1, tmp2;
	
	for(int i = 0; i < n; i++){	
		int k = i;
		for(int j = i + 1; j < n; j++) {
			if(less(a[j], a[k])){
				k = j;
			}
		}
		tmp = a[k].y;
		tmp1 = a[k].m;
		tmp2 = a[k].d;
		a[k].y = a[i].y;
		a[k].m = a[i].m;
		a[k].d = a[i].d;
		a[i].y = tmp;
		a[i].m = tmp1;
		a[i].d = tmp2;
	}
}
