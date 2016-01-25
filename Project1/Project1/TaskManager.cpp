#include "TaskManager.h"
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
	string deadline;
	int id;
	int priority;

	cout << "Task     name: ";
	cin >> name;
	cout << "Task deadline: ";
	cin >> deadline;
	cout << "Task       id: ";
	cin >> id;
	cout << "Task priority: ";
	cin >> priority;

	Task *task = new Task(name, deadline, id, priority);
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