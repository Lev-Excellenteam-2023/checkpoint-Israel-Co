#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"

Student* createStudent(char* _firstName, char* _lastName, char* phoneNum, int* _grades) {
	Student* student = (Student*)malloc(sizeof(Student));

	strcpy(student->firstName, _firstName);
	strcpy(student->lastName, _lastName);
	strcpy(student->phoneNumber, phoneNum);

	for (int i = 0; i < NUM_OF_COURSES; ++i) {
		student->grades[i] = _grades[i];
	}

	return student;
}

void printStudent(int level, int classNum, Student* student) {
	printf("First Name: %s \n", student->firstName);
	printf("Last Name: %s \n", student->lastName);
	printf("Phone: %s \n", student->phoneNumber);
	printf("Level: %d \n", level + 1);
	printf("Class: %d \n", classNum + 1);
	printf("Grades:");

	for (size_t i = 0; i < NUM_OF_COURSES; i++) {
		printf(" %d", student->grades[i]);
	}
}