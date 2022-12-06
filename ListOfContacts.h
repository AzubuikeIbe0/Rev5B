#pragma once
#include <iostream>
#include "Contacts.h"
#include "NodeOfContacts.h"
using namespace std;

class  ListOfContacts
{
	friend class NodeOfContacts;

private:
	NodeOfContacts* head;

public:
	ListOfContacts();
	bool insertFront(Contacts);
	Contacts deleteFront();
	~ListOfContacts();
};