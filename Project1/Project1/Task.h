#pragma once
#include <string>
#include <deque>
using namespace std;
class Task
{
private:

	string name;
	string deadline;
	int id;
	int priority;
	

protected:

public:

	Task(string name, string deadline, int id, int priority);
	~Task(void);
	void Print();
};

