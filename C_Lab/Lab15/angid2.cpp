#include <stdio.h>
#include <stdlib.h>

int *get_array(int n, int value );

int main(){
	int*a;
	int n, m;
	
	printf("Uusgeh husnegtiin hemjee: ");
	scanf("%d", &n);
	printf("Husnegtiin utga: ");
	scanf("%d", &m);
	a = get_array(n, m);
	
	printf("Tanii uusgesen husengt:\n");
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
	free(a); 
	
	return 0;
}

int *get_array(int n, int value){
	int *p;
	p = (int*)malloc(sizeof(int)*n);
	if (p == NULL){	
		printf("Sanax oi xvrsengvi! \n");
		exit(1);
	}
	
	for(int i = 0; i < n; i++)
		p[i] = value;
	return p;
}
