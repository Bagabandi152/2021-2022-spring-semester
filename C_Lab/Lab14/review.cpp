#include <stdio.h>

struct Person{
	char fname[50];
	char lname[50];
	int age;
};

typedef struct Person person;

void read(person a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d - aar hunii medeelel oruul:\n", i + 1);
		printf("fname: ");
		scanf("%s", &a[i].fname);
		printf("lname: ");
		scanf("%s", &a[i].lname);
		printf("age: ");
		scanf("%d", &a[i].age);		
	}
}

void young_person(person a[], int n){
	
	person man;
	man = a[0];
	
	for(int i = 0; i < n; i++){
		if(man.age > a[i].age){
			man = a[i];
		}
	}
	
	printf("hamgiin zaluu hunii ner: %s", man.fname);
}

int main(){
	int n;
	printf("Hunii toog oruul: ");
	scanf("%d", &n);
	person people[n];
	
	read(people, n);
	
	young_person(people, n);
	
	return 0;
}
