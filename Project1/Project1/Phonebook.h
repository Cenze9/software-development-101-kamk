#pragma once
#include <string>
#include <deque>
using namespace std;
class Phonebook
{
private:

	string name;
	string address;
	string number;

protected:

public:

	Phonebook(string name, string address,string number);
	~Phonebook(void);
	void Print();

};

