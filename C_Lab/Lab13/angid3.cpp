#include <stdio.h>

void find(int a[] , int n, int *addr , int *addr1);
void print(int *a, int n);
void read(int *a, int n);
int main ()
{	
	int a[100];
	read(a, 5);
	print(a, 5);
	int x, y;
	find(a, 5 , &x, &y);
	printf ("tegsh toonuudiin too: %d\n", x);
	printf ("sondgoi toonuudiin too: %d\n", y);
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
void find(int a[] , int n, int *addr , int *addr1){
	int tegsh = 0, sondgoi = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%2 == 0) tegsh++;
		else sondgoi++;
	}
	*addr = tegsh;
	*addr1 = sondgoi;
}
