#pragma once
#include <string>
#include "Phonebook.h"
#include <iostream>
using namespace std;

class Manager
{
private:

	deque<Phonebook*> books;

protected:

public:

	Manager();
	~Manager();
	void NewPerson();
	void Printy();
	void Find();
};

