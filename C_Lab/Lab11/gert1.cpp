#include <stdio.h>
#include <string.h>

struct Student{
	char fname[20], lname[20], id[10];
	float golch;
};
typedef struct Student Student;

void read_students(Student a[], int n);
void print_students(Student a[], int n);
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n, float golch);


void sort_by_golch(Student a[], int n);

int main(){
	int n;
	printf("Suragchdiin toog oruul: ");
	scanf("%d", &n);
	
	Student a[n];
	
	printf("Suragchdiin medeelliig oruul:\n");
	
	read_students(a, n);
	sort_by_golch(a, n);
	printf("\n\n");
	print_students(a, n);
	
	printf("\n\nKhailtiin heseg:\n");
	
	char s1[20], s2[20], s3[20];
	float g;
	
	printf("fname eer haih: ");
	scanf("%s", s1);
	if(search_by_fname(a, n, s1) == 0) printf("Ilerts: %d\n", 0);
	else printf("Ilerts: %d, muriin dugaar: %d\n", 1, search_by_fname(a, n, s1));
	
	printf("\n\nlname eer haih: ");
	scanf("%s", s2);
	if(search_by_lname(a, n, s2) == 0) printf("Ilerts: %d\n", 0);
	else printf("Ilerts: %d, muriin dugaar: %d\n", 1, search_by_lname(a, n, s2));
	
	printf("\n\nid aar haih: ");
	scanf("%s", s3);
	if(search_by_id(a, n, s3) == 0) printf("Ilerts: %d\n", 0);
	else printf("Ilerts: %d, muriin dugaar: %d\n", 1, search_by_id(a, n, s3));
	
	
	printf("\n\ngolchoor haih: ");
	scanf("%f", &g);
	if(search_by_golch(a, n, g) == 0) printf("Ilerts: %d\n", 0);
	else printf("Ilerts: %d, muriin dugaar: %d\n", 1, search_by_golch(a, n, g));
	return 0;
}

void sort_by_golch(Student a[], int n){
	int idx;
	float mx;
	char s1[20], s2[20], s3[20];
	for(int i = 0; i < n; i++){
		idx = i;
		mx = a[i].golch;
		for(int j = i + 1; j < n; j++){
			if(mx < a[j].golch){
				idx = j;
				mx = a[j].golch;
				strcpy(s1, a[j].fname);
				strcpy(s2, a[j].lname);
				strcpy(s3, a[j].id);
			}
		}
		if(i != idx){
			a[idx].golch = a[i].golch;
			strcpy(a[idx].fname, a[i].fname);
			strcpy(a[idx].lname, a[i].lname);
			strcpy(a[idx].id, a[i].id);
			a[i].golch = mx;
			strcpy(a[i].fname, s1);
			strcpy(a[i].lname, s2);
			strcpy(a[i].id, s3);
		}
	}
}

int search_by_fname(Student a[], int n, char fname[]){
	for(int i = 0; i < n; i++){
		if(strcmp(fname, a[i].fname) == 0) return i + 1;
	}
	return 0;
}

int search_by_lname(Student a[], int n, char lname[]){
	for(int i = 0; i < n; i++){
		if(strcmp(lname, a[i].lname) == 0) return i + 1;
	}
	return 0;
}

int search_by_id(Student a[], int n, char id[]){
	for(int i = 0; i < n; i++){
		if(strcmp(id, a[i].id) == 0) return i + 1;
	}
	return 0;
}

int search_by_golch(Student a[], int n, float golch){
	for(int i = 0; i < n; i++){
		if(golch == a[i].golch) return i + 1;
	}
	return 0;
}

void read_students(Student a[], int n){
	for(int i = 0; i < n; i++){
		printf("Student No%d.\n", i + 1);
		printf("Enter fname: ");
		scanf("%s", a[i].fname);
		printf("Enter lname: ");
		scanf("%s", a[i].lname);
		printf("Enter id: ");
		scanf("%s", a[i].id);
		printf("Enter GPA: ");
		scanf("%f", &a[i].golch);
	}
}
void print_students(Student a[], int n){
	printf("No\tfname\tlname\tid\tgolch\n");
	for(int i = 0; i < n; i++){
		printf("%d. %s %s %s %f\n", i + 1, a[i].fname, a[i].lname, a[i].id, a[i].golch);
	}
}

