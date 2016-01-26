#include "Phonebook.h"
#include <iostream>
using namespace std;

Phonebook::Phonebook(string call, string end, string phone)
{
	name = call;
	address = end;
	number = phone;
}

Phonebook::~Phonebook()
{
}



void Phonebook::Print()
{
	cout << "   Name: " << name << endl;
	cout << "address: " << address << endl;
	cout << " number: " << number << endl;

}