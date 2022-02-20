#include <stdio.h>
#include <string.h>

struct Student{
	char fname[20], lname[20], id [10];
	float golch;
};

void read(struct Student *s)
{
	printf("\nEnter data of student:\n");
	printf("Fname: ");
	scanf("%s", s -> fname);
	printf("Lname: ");
	scanf("%s", s -> lname);
	printf("Id: ");
	scanf("%s", s -> id);
	printf("GPA: ");
	scanf("%f", &s -> golch);
}

void print(struct Student s)
{
	printf("Student[fname: %s, lname: %s, id: %s, GPA: %f]\n", s.fname, s.lname, s.id, s.golch);
}

void set_fname(struct Student *p, char ner[]);
void set_lname(struct Student *p, char ovog[]);
void set_id(struct Student *p, char id[]);
void set_golch(struct Student *p, float golch);

int main ()
{
	struct Student bat , t;
	char ner[] = "dorj", ovog[] = "bold", id[] = "1234";
	read(&bat) ;
	print(bat) ;
	set_fname(&t, ner);
	set_lname(&t, ovog);
	set_id(&t, id);
	set_golch(&t, 3);
	print(t);
	return 0;
}

void set_fname(struct Student *p, char ner[]){
	strcpy((*p).fname, ner);
}
void set_lname(struct Student *p, char ovog[]){
	strcpy((*p).lname, ovog);
}
void set_id(struct Student *p, char id[]){
	strcpy((*p).id, id);
}
void set_golch(struct Student *p, float golch){
	(*p).golch = golch;
}
