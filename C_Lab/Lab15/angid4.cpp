#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100


int main(){
	
	FILE *fp = fopen("input1.txt", "r");
	char *a;
	
	int n;
	fscanf(fp, "%d", &n);
	
	a = (char*)malloc(sizeof(char)*n);
	if(a == NULL){	
		printf("Sanax oi xvrsengvi!\n");
		exit(1);
	}
	
	printf("Husnegtiin urt: ");
	printf("%d\n", n);
	
	fclose(fp);
	
	FILE *fp1 = fopen("input1.txt", "r");
	while(!feof(fp1)){
		fscanf(fp1, "%[^\n]%*c", a);
	}
	fclose(fp1);
	printf("FILE - aas unshsan husnegtiin elementuud:\n");
	char *t = strtok(a, " ");
	while(t != NULL){
      printf( "%s ", t);
      t = strtok(NULL, " ");
	}
	free(a);
	return 0;
}
