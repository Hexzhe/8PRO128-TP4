// Fig. 10.1: employ2.cpp
// Member function definitions for
// abstract base class Employee.
// Note: No definitions given for pure virtual functions.

#include <iostream>
#include <cstring>
#include <cassert>
#include "employ2.h"

Employee::Employee()
{
	firstName = (char*)"John";
	lastName = (char*)"Doe";
	birthDate = Date(11, 3, 1971);
}

// Constructor dynamically allocates space for the
// first and last name and uses strcpy to copy
// the first and last names into the object.
Employee::Employee(const char *first, const char *last, Date bd)
{
	firstName = _strdup(first);
	lastName = _strdup(last);
	birthDate = bd;
}

// Destructor deallocates dynamically allocated memory
Employee::~Employee()
{
	delete[] firstName;
	delete[] lastName;
}

// Return a pointer to the first name
// Const return type prevents caller from modifying private 
// data. Caller should copy returned string before destructor 
// deletes dynamic storage to prevent undefined pointer.
const char *Employee::getFirstName() const
{
	return firstName;   // caller must delete memory
}

// Return a pointer to the last name
// Const return type prevents caller from modifying private 
// data. Caller should copy returned string before destructor
// deletes dynamic storage to prevent undefined pointer.
const char *Employee::getLastName() const
{
	return lastName;   // caller must delete memory
}

// Print the name of the Employee
void Employee::print() const
{
	std::cout << firstName << ' ' << lastName << std::endl;
} 