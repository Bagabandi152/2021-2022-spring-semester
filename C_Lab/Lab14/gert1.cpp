#include <stdio.h>

void read(int *begin, int *end);
void print(int *begin, int *end);
int main(){
	int i, n, a [100];
	printf("Husnegtiin hemjeeg oruul: ");
	scanf("%d", &n);
	printf("Husnegtiin utgiig oruul:\n");
	read(a, a + n);
	printf("Tanii oruulsan husnegt:\n");
	print(a, a + n);	
	return 0;
}
void read(int *begin, int *end){
	int n = end - begin;
	for(int i = 0; i < n; i++)
		scanf("%d", begin + i);
}
void print(int *begin, int *end){
	int n = end - begin;
	for(int i = 0; i < n; i++)
		printf("%d ", *(begin + i));
	printf("\n");
}
