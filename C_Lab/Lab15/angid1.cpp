#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b;

	FILE *fp1;
	const char *name = "input.txt";
	const char *mode = "r";
	fp1 = fopen(name , mode);
	if(fp1 == NULL){
		printf("%s file -iig ongoilgoh bolomjgui ", name);
		exit(1);
	}

	fscanf(fp1, "%d %d", &a, &b);

	fclose(fp1);

	FILE *fp2 = fopen("output", "w");

	if(fp2 == NULL){
		printf("output file -iig ongoilgoh bolomjgui ");
		exit(1);
	}
	fprintf(fp2, "%d %d\n", a, b);

	fclose(fp2);

	return 0;
}
