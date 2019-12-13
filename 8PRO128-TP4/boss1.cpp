// Fig. 10.1: boss1.cpp
// Member function definitions for class Boss

#include "boss1.h"

Boss::Boss(const char* first, const char* last, Date bd, double s) : Employee(first, last, bd)
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

/* Null, because instance will be initialized on demand. */
Boss* Boss::instance = 0;

Boss* Boss::getInstance(const char* first, const char* last, Date bd, double s)
{
	try
	{
		if (instance == 0)
		{
			instance = new Boss(first, last, bd, s);
		}

		return instance;
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
		getInstance()->weeklySalary = s > 0 ? s : 0;
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
		return getInstance()->weeklySalary + (d.isSameMonth(getInstance()->birthDate) ? 100 : 0);
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
		getInstance()->Employee::print();
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