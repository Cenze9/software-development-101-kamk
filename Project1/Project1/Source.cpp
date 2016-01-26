#include <iostream>
#include <string>
#include "Manager.h"

using namespace std;
void menu();

//main part of program
int main()
{
	menu();
	system("pause");
	return 0;
}

//used as menu structure for the program
void menu()
{
Manager taskmanager;
system("pause");

taskmanager.NewPerson();
taskmanager.Printy();
}