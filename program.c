#include "StudentList.h"

extern LEVELS_NUMBER;
extern CLSSES_NUMBER;
// extern school;

//void printSchool();

int main() {
	initSchool("students_with_class.txt");
	printSchool();
	return 0;
}

//void printSchool() {
//	StudentList* studentList;
//	for (int level = 0; level < LEVELS_NUMBER; level++){
//		for (int classNum = 0; classNum < CLSSES_NUMBER; classNum++) {
//			studentList = school[level][classNum];
//			for (studentList; studentList != NULL; studentList = studentList->next) {
//				printf("First Name: %s \n", studentList->value->firstName);
//				printf("Last Name: %s \n", studentList->value->lastName);
//				printf("Phone: %s \n", studentList->value->phoneNumber);
//				printf("Level: %d \n", level + 1);
//				printf("Class: %d \n", classNum + 1);
//				printf("Grades:");
//
//				for (size_t i = 0; i < NUM_OF_COURSES; i++) {
//					printf(" %d", studentList->value->grades[i]);
//				}
//				printf("\n\n");
//			}			
//		}
//	}
//}