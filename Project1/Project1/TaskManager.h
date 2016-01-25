#pragma once
#include <string>
#include "Task.h"
#include <iostream>
using namespace std;

class TaskManager
{
private:

	deque<Task*> tasks;

protected:

public:
	TaskManager();
	~TaskManager();
	void NewTask();
	void Printy();
};

