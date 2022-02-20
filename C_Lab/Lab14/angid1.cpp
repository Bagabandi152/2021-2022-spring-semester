#include <stdio.h>
int main(){
	int i, a [100];
	for (i = 0; i < 5; i++)
		scanf ("%d", a + i) ; // &a[i]
	for(i = 0; i < 5; i++)
		printf("%d ", *(a + i)); // xevlex uildel xiine uu.
		
	return 0;
}
