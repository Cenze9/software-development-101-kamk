#pragma once
#include <string>
#include <deque>
using namespace std;
class Task
{
private:

	string name;
	string address;
	int number;
	

protected:

public:

	Task(string name, string address,int number);
	~Task(void);
	void Print();
};

