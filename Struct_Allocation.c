#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[50];
	int age;
	float grade;
} Student;

void allocation() {
	Student *s = malloc(sizeof(Student));
	if (s==NULL) {
	printf("memory allocation failed");
	return;
	}

	strcpy(s->name, "bob");
	s->age = 22;
	s->grade = 53.34;

	printf("student data\n");
	printf("name: %s\n", s->name);
	printf("age: %d\n", s->age);
	printf("grade: %.2f\n", s->grade);

	free(s);

}

int main() {
	allocation();
	return 0;
}
