#include <stdio.h>
#include <stdlib.h>

struct Student{
	char fname[20], lname[20], id[10];
	float gpa;
};
typedef struct Student student;

int main(){
	int n;
	
	printf("Oyutnii toog oruul: ");
	scanf("%d", &n);
	
	student a[n];
	for(int i = 0; i < n; i++){
		printf("%d - r oyutnii medeelel oruul:\n", i + 1);
		printf("fname: ");
		scanf("%s", a[i].fname);
		printf("lname: ");
		scanf("%s", a[i].lname);
		printf("id: ");
		scanf("%s", a[i].id);
		printf("GPA: ");
		scanf("%f", &a[i].gpa);
	}
	
	FILE *fp = fopen("student.txt", "w");
	if(fp == NULL){
		printf("output file -iig ongoilgoh bolomjgui ");
		exit(1);
	}
	
	fwrite(a, sizeof(struct Student), n, fp);
	fclose(fp);
	return 0;
}
