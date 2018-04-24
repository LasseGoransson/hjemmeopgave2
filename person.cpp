#include "person.h"



Person::Person()
{
}

Person::Person(string n, dato b)
{
	name = n;
	birthday = b;

}

Person::Person(string n)
{
    name = n;
}


string Person::getName()
{
	return name;
}

dato Person::getBirthday()
{
	return birthday;
}


Person::~Person()
{
}
