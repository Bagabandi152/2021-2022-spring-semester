#include <stdio.h>
const int MAX = 3;
int main(){
	int var[] = {10, 15, 20};
	int i, *ptr;
	ptr = var;
	i = 0;
	while(ptr <= &var[MAX - 1]){
		printf("\n Address of var[%d] = %p", i, ptr);
		printf("\n Value of var[%d] = %d", i, *ptr);
		printf("\n");
		ptr++;
		i++;
	}
	return 0;
}

