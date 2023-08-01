#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_OF_COURSES 10
#define NAME_LEN 25
#define NUM_OF_DIGITS_PHONE 11

typedef struct {
	char firstName[NAME_LEN];
	char lastName[NAME_LEN];
	char phoneNumber[NUM_OF_DIGITS_PHONE];
	int grades[NUM_OF_COURSES];
} Student;

Student* createStudent(char* _firstName, char* _lastName, char* phone_num, int* _grades);

void printStudent(Student* student);