#include <stdio.h>

int *find(int *begin, int *end, int x);
int main()
{
	int a[5] = {3 , 7 , 1 , 2 , 4};
	int *p, x;
	printf ("xaix too: ");
	scanf ("%d", &x);
	p = find(a, a + 5, x);
	if(p == NULL )
		printf("%d too oldsongui \n", x);
	else
		printf("%d too %d bairlald oldloo \n", x, p - a);
	return 0;
}
int *find(int *begin, int *end, int x){
	int n = end - begin;
	for(int i = 0; i < n; i++){
		if(begin[i] == x) return &begin[i];
	}
	return NULL;
}

