#include "Contacts.h"

Contacts::Contacts()
{
	name = "";
	number = 0;
}

void Contacts::setName()
{
	name = "The One";
}

string Contacts::getName()
{
	return name;
}


void Contacts::setNumber()
{
	number = 250;
}


int Contacts::getNumber()
{
	return number;
}