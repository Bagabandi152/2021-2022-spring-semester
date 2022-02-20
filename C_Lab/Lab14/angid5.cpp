#include <stdio.h>

void reverse(int *begin , int *end);
int main()
{
	int a[5] = {3 , 7 , 1 , 2 , 4};
	reverse (a, a + 3);
	int i;
	for(i = 0; i < 5; i++)
		printf("%d ", a[i]); // 1 7 3 2 4
	return 0;
}
void reverse(int *begin , int *end){
	int n = end - begin;
	int tmp = *begin;
	for(int i = 0; i < n; i++){
		if(i == n - 1) begin[i] = tmp;
		else begin[i] = begin[n - (i + 1)];
	}
}
