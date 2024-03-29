// Abstract base class Employee
#include <ctime>
#include "Date.h"
#include "LazyExceptionHandler.h"
#ifndef EMPLOY2_H
#define EMPLOY2_H

class Employee {
public:
	Employee();
	Employee(const char *, const char *, Date bd);
	~Employee(); // destructor reclaims memory

	const char *getFirstName() const;
	const char *getLastName() const;

	// Pure virtual function makes Employee abstract base class
	virtual double earnings(Date) const = 0; // pure virtual
	virtual void print() const; // virtual

	Date birthDate;
protected:
	char *firstName;
	char *lastName;
};
#endif 