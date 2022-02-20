#include <stdio.h>

void read(int a[] , int n){
	int i;
	for (i = 0; i < n; i++)	
		scanf ("%d", &a[i]) ;
}

void print (int a[] , int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main(){
	int A[5], B[3];
	
	printf("Enter a value of 1st array: \n");
	read(A, 5);
	printf("1st array elements:\n");
	print(A, 5);
	
	printf("Enter a value of 2nd array: \n");
	read(B, 3);
	printf("2nd array elements:\n");
	print(B, 3);
	
	return 0;
}
