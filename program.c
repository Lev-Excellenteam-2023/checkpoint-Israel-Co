#include "StudentList.h"

extern LEVELS_NUMBER;
extern CLSSES_NUMBER;

int main() {
	initSchool("students_with_class.txt");
	printSchool();
	freeSchool();
	return 0;
}