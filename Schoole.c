#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include "StudentList.h"

#define LEVELS_NUMBER 12
#define CLSSES_NUMBER 10
#define BUFFER_SIZE 250
#define FIELDS_NUM 15

StudentList* school[LEVELS_NUMBER][CLSSES_NUMBER];

void initSchool(char* fileName) {
	FILE* openFile = fopen(fileName, "r");

	char* tokens[FIELDS_NUM];
	int level;
	int classNum;
	int grades[NUM_OF_COURSES];

	if (openFile == NULL) {
		printf("Error opening the file.\n");
		return;
	}

	char line[BUFFER_SIZE];
	while (fgets(line, BUFFER_SIZE, openFile) != NULL) {
		tokens[0] = strtok(line, " ");
		for (size_t i = 1; i < FIELDS_NUM; i++) {
			tokens[i] = strtok(NULL, " ");
		}

		level = atoi(tokens[3]) - 1;
		classNum = atoi(tokens[4]) - 1;
		for (size_t i = 5; i < FIELDS_NUM; i++)
		{
			grades[i - 5] = atoi(tokens[i]);
		}

		if (school[level][classNum] == NULL)
			school[level][classNum] = createNode(createStudent(tokens[0], tokens[1], tokens[2], grades));
		else {
			StudentList* newNode = createNode(createStudent(tokens[0], tokens[1], tokens[2], grades));
			newNode->next = school[level][classNum]->next;
			school[level][classNum]->next = newNode;
		}
	}

	fclose(openFile);
}

void freeSchool() {
	for (size_t level = 0; level < LEVELS_NUMBER; level++) {
		for (size_t classNum = 0; classNum < CLSSES_NUMBER; classNum++) {
			freeStudentList(school[level][classNum]);
		}
	}
}

void printSchool() {
	for (size_t level = 0; level < LEVELS_NUMBER; ++level) {
		for (size_t classNum = 0; classNum < CLSSES_NUMBER; ++classNum) {
			printStudentList(level, classNum, school[level][classNum]);
		}
	}
}