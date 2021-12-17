#include <stdio.h>
#include <string.h>

union university
{
	int s_age;
	char s_name[30];
};

int main()
{
	union university student;
	student.s_age=22;
	printf("Student Age: %d\n", student.s_age);
	strcpy(student.s_name, "Yunus");
	printf("Student Name: %s\n", student.s_name);
}
