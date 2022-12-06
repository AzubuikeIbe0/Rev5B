#pragma once
#include <iostream>
using namespace std;

class Contacts
{
	friend class NodeOfContacts;
	friend class ListOfContacts;

private:
	string name;
	int number;

public:
	Contacts();
	void setName();
	string getName();
	void setNumber();
	int getNumber();
};
