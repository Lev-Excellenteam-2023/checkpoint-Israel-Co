#pragma once
#include "Student.h"

typedef struct studentList {
	Student* value;
	struct studentList* next;
} StudentList;

StudentList* createNode(Student* student);

void freeStudentList(StudentList* head);