#include "Task.h"
#include <iostream>
using namespace std;

Task::Task(string call, string end, int shit, int when)
{
	name = call;
	deadline = end;
	id = shit;
	priority = when;
}

Task::~Task()
{
}



void Task::Print()
{
	cout << "    Name: " << name << endl;
	cout << "      Id: " << id << endl;
	cout << "Deadline: " << deadline << endl;
	cout << "Priority: " << priority << endl;

}