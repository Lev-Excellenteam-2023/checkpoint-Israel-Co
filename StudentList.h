#pragma once
#include "Student.h"

typedef struct studentList {
	Student* value;
	struct studentList* next;
} StudentList;

void addStudent(StudentList* studentList, Student* student);

void freeStudentList(StudentList* head);