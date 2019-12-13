// Fig. 10.1: boss1.cpp
// Member function definitions for class Boss

#include "boss1.h"

Boss::Boss(const char* first, const char* last, Date bd, double s) : Employee(first, last, bd)
{
	weeklySalary = s > 0 ? s : 0;
}

/* Null, because instance will be initialized on demand. */
Boss* Boss::instance = 0;

Boss* Boss::getInstance(const char* first, const char* last, Date bd, double s)
{
	if (instance == 0)
	{
		instance = new Boss(first, last, bd, s);
	}

	return instance;
}

// Set the Boss's salary
void Boss::setWeeklySalary(double s)
{
	getInstance()->weeklySalary = s > 0 ? s : 0;
}
// Get the Boss's pay
double Boss::earnings(Date d) const 
{ 
	return getInstance()->weeklySalary + (d.isSameMonth(getInstance()->birthDate) ? 100 : 0);
}

// Print the Boss's name 
void Boss::print() const
{
	std::cout << "               Boss: ";
	getInstance()->Employee::print();
} 