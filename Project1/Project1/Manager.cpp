#include "Manager.h"
using namespace std;
#include <set>
Manager::Manager()
{

}


Manager::~Manager()
{
}

void Manager::NewPerson()
{
	string name;
	string address;
	string number;

	cout << "   name: ";
	cin >> name;
	cout << "address: ";
	cin >> address;
	cout << " number: ";
	cin >> number;

	Phonebook * book = new Phonebook(name, address, number);
	books.push_back(book);

}

void Manager::Printy()
{
	deque<Phonebook*>::iterator it;

	for (it = books.begin(); it != books.end(); ++it)
	{
		(*it)->Print();
	}

}

void Manager::Find()
{
	set<int>::iterator it;
}