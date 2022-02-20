#include <stdio.h>
#include <stdlib.h>

struct Student{
	char fname[20], lname[20], id[10];
	float gpa;
};
typedef struct Student student;

int main(){
	int n;
	student *p;
	printf("Medeelliin harah oyutnii toog oruul: ");
	scanf("%d", &n);
	
	p = (student*)malloc(sizeof(student)*n);
	if(p == NULL){	
		printf("Sanax oi xvrsengvi! \n");
		exit(1);
	}
	
	FILE* fp = fopen("student.txt", "r");
	if(fp == NULL){
		printf("student.txt file -iig ongoilgoh bolomjgui\n");
		exit(1);
	}
	
	fread(p, sizeof(student), n, fp);
	
	for(int i = 0; i < n; i++){
		printf("\n\n%d - nii medeelel:\n", i + 1);
		printf("fname: %s\n", p[i].fname);
		printf("lname: %s\n", p[i].lname);
		printf("id: %s\n", p[i].id);
		printf("GPA: %.2f", p[i].gpa);
	}
	fclose(fp);
	
	return 0;
}
