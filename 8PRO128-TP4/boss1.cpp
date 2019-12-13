// Fig. 10.1: boss1.cpp
// Member function definitions for class Boss

#include "boss1.h"

// Constructor function for class Boss
Boss::Boss(const char *first, const char *last, Date bd, double s) : Employee(first, last, bd)  // call base-class constructor
{
	try
	{
		setWeeklySalary(s);
	}
	catch (const std::exception & ex)
	{
		LazyExceptionHandler::TellMeWhatsWrongButDontDoAnythingToAddressIt(ex.what());
	}
	catch (...)
	{
		LazyExceptionHandler::TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt();
	}
}
// Set the Boss's salary
void Boss::setWeeklySalary(double s)
{
	try
	{
		weeklySalary = s > 0 ? s : 0;
	}
	catch (const std::exception & ex)
	{
		LazyExceptionHandler::TellMeWhatsWrongButDontDoAnythingToAddressIt(ex.what());
	}
	catch (...)
	{
		LazyExceptionHandler::TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt();
	}
}
// Get the Boss's pay
double Boss::earnings(Date d) const 
{ 
	try
	{
		return weeklySalary + (d.isSameMonth(birthDate) ? 100 : 0);
	}
	catch (const std::exception & ex)
	{
		LazyExceptionHandler::TellMeWhatsWrongButDontDoAnythingToAddressIt(ex.what());
	}
	catch (...)
	{
		LazyExceptionHandler::TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt();
	}
}

// Print the Boss's name 
void Boss::print() const
{
	try
	{
		std::cout << "               Boss: ";
		Employee::print();
	}
	catch (const std::exception & ex)
	{
		LazyExceptionHandler::TellMeWhatsWrongButDontDoAnythingToAddressIt(ex.what());
	}
	catch (...)
	{
		LazyExceptionHandler::TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt();
	}
} 