#pragma once

#include "Student.h"

Student* createStudent(char* _firstName, char* _lastName, char* phoneNum, int* _grades) {
	Student* student = (Student*)malloc(sizeof(Student));

	strcpy(student->firstName, _firstName);
	student->firstName[sizeof(_firstName)] = '\0';
	strcpy(student->lastName, _lastName);
	student->lastName[sizeof(_lastName)] = '\0';
	strcpy(student->phoneNumber, phoneNum);
	student->phoneNumber[sizeof(phoneNum)] = '\0';

	for (int i = 0; i < NUM_OF_COURSES; ++i) {
		student->grades[i] = _grades[i];
	}

	return student;
}