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