#include "Phonebook.h"
#include <iostream>
using namespace std;

Task::Task(string call, string end, int phone)
{
	name = call;
	address = end;
	number = phone;
}

Task::~Task()
{
}



void Task::Print()
{
	cout << "    Name: " << name << endl;
	cout << "      Id: " << id << endl;
	cout << "number: " << number << endl;

}