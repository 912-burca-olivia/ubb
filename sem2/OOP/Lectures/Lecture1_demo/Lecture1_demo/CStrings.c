//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main() 
//{
//	system("color f4");
//
//	char surname[50];
//	char firstName[50]; 
//	char name[100];
//
//	strcpy(surname, "Smith");
//	printf("surname = '%s' length = %d\n", surname, strlen(surname));
//	
//	strcpy(firstName, "John"); // buffer overflow (this will corrupt the stack), if the allocated space is not enough => undefined behaviour
//	printf("first name = '%s' length = %d\n", firstName, strlen(firstName));
//	
//	strcpy(name, firstName);
//	strcat(name, " ");
//	strcat(name, surname);
//
//	printf("name = '%s' length = %d\n", name, strlen(name));
//	
//	system("pause");
//	return 0;
//}