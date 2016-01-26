#include "Manager.h"
using namespace std;

TaskManager::TaskManager()
{

}


TaskManager::~TaskManager()
{
}

void TaskManager::NewTask()
{
	string name;
	string address;
	
	int number;

	cout << "Task     name: ";
	cin >> name;
	cout << "Task address: ";
	cin >> address;
	cout << "Task Number: ";
	cin >> number;

	Task *task = new Task(name, address, id, number);
	tasks.push_back(task);

}

void TaskManager::Printy()
{
	deque<Task*>::iterator it;

	for (it = tasks.begin(); it != tasks.end(); ++it)
	{
		(*it)->Print();
	}

}