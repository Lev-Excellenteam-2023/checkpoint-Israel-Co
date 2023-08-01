#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "StudentList.h"


StudentList* createNode(Student* student) {
	StudentList* newStudent = (StudentList*)malloc(sizeof(StudentList));
	newStudent->value = student;
	newStudent->next = NULL;
	return newStudent;
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

void printStudentList(int level, int classNum, StudentList* studentList) {
	StudentList* studprinter = studentList;
	while (studprinter != NULL) {
		printStudent(level, classNum, studprinter->value);
		printf("\n--------------------------------------------------------------------\n");
		studprinter = studprinter->next;
	}
}