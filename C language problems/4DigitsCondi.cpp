#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	for(i=1000; i<10000; i++){
		if(i%133==125&&i%134==111){
			printf("%d ", i);
		}
	}
	return 0;
}
