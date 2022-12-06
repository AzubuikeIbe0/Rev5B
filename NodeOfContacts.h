#pragma once
#include <iostream>
#include "Contacts.h"
using namespace std;

class NodeOfContacts
{
	friend class Contacts;
private:
	Contacts theContact;
	NodeOfContacts* next;

public:
	NodeOfContacts();
};
