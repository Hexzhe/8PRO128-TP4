// Abstract base class Employee
#include <ctime>
#include "Date.h"
#ifndef EMPLOY2_H
#define EMPLOY2_H

class Employee {
public:
	Employee(const char *, const char *, Date bd);
	~Employee(); // destructor reclaims memory

	const char *getFirstName() const;
	const char *getLastName() const;

	// Pure virtual function makes Employee abstract base class
	virtual double earnings(Date) const = 0; // pure virtual
	virtual void print() const; // virtual

	Date birthDate;
private:
	char *firstName;
	char *lastName;
};
#endif 