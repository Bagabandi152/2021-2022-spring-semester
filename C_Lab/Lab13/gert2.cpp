#include <stdio.h>

int* search(int a[], int value, int size);
void read(int *a, int n);
void print(int *a, int n);
int main ()
{
	int a[100];
	read(a, 5);
	print(a, 5);
	int *p;
	p = search(a, 3 , 5);
	printf("Result:\n");
	if(p == NULL)
		printf("Oldsongui.\n");
	else
		printf("%d too %d bairlald oldloo.\n", *p, p - a) ;
	return 0;
}
void read(int *a, int n){
	printf("Enter values of array:\n");
	for(int i = 0; i < n; i ++){
		scanf("%d", a + i);
	}
}
void print(int *a, int n){
	printf("Given array:\n");
	for(int i = 0; i < n; i ++){
		printf("%d ", *(a + i));
	}
	printf("\n");
}
int* search(int a[], int value, int size){
	for(int i = 0; i < size; i++){
		if(a[i] == value) return &a[i];
	}
	return NULL;
}
