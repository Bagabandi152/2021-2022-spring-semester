#include <stdio.h>

int main(){
	
	int a[10] = {0}, j=1;
	
	for(int i=0; i<10; i++)
		a[i] = j++;
		
	for(int i=0; i<10; i++)
		printf("%d ", a[i]);
	
	return 0;
}
