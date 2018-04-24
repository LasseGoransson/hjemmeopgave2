#pragma once
#include "dato.h"
#include <string>
using namespace std;

class Person
{

public:
    Person();
    Person(string, dato);
    Person(string);
	string getName();
	dato getBirthday();
    ~Person();

protected:
	string name;
	dato birthday;
};

