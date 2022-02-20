#include <stdio.h>

void read(int *p)
{
	scanf("%d", p + 2) ;
}

int main(){
	int a[5];
	printf("Husnegtiin ehnii 4n elementiig oruul:\n");
	for(int i = 0; i < 4; i++){
		read(a + (i - 2));	
	}
	printf("Tanii oruulsan utguud:\n");
	for(int i = 0; i < 4; i++)
		printf("%d ", a[i]);
	return 0;
}
