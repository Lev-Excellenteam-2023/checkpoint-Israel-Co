#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "StudentList.h"

void addStudent(StudentList* studentList, Student* student) {
	StudentList* newStudent = (StudentList*)malloc(sizeof(StudentList));
	if (studentList == NULL) {
		studentList = newStudent;
		newStudent->next = NULL;
	}
	else {
		newStudent->next = studentList->next;
		studentList->next = newStudent;
	}
	newStudent->value = student;
}

void freeStudentList(StudentList* head) {
	if (head == NULL) {
		return;
	}
	else {
		StudentList* tmp = head->next;
		head->next = NULL;
		free(head->value);
		freeStudentList(tmp);
	}
}