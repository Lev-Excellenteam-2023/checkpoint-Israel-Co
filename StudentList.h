#pragma once
#include "Student.h"

typedef struct {
	Student* value;
	StudentList* next;
} StudentList;