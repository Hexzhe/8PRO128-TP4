// Fig. 10.1: boss1.cpp
// Member function definitions for class Boss

#include "boss1.h"

// Constructor function for class Boss
Boss::Boss(const char *first, const char *last, Date bd, double s) : Employee(first, last, bd)  // call base-class constructor
{
	setWeeklySalary(s);
}
// Set the Boss's salary
void Boss::setWeeklySalary(double s)
{
	weeklySalary = s > 0 ? s : 0;
}
// Get the Boss's pay
double Boss::earnings(Date d) const 
{ 
	return weeklySalary + (d.isSameMonth(birthDate) ? 100 : 0);
}

// Print the Boss's name 
void Boss::print() const
{
	std::cout << "               Boss: ";
	Employee::print();
} 