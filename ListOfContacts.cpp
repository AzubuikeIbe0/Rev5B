#include "ListOfContacts.h"
#include "NodeOfContacts.h"
#include "Contacts.h"

ListOfContacts::ListOfContacts()
{
	head = nullptr;

}


bool ListOfContacts::insertFront(Contacts myContact)
{
	NodeOfContacts* newNode = new NodeOfContacts();

	NodeOfContacts* nodePtr = head;

	newNode->theContact = myContact;

	newNode->next = head;

	head = newNode;

	return true;
}