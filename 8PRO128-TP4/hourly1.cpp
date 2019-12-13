// Fig. 10.1: hourly1.cpp
// Member function definitions for class HourlyWorker

#include "hourly1.h"

// Constructor for class HourlyWorker
HourlyWorker::HourlyWorker(const char *first, const char *last, Date bd, double w, double h)	: Employee(first, last, bd)   // call base-class constructor
{
	try
	{
		setWage(w);
		setHours(h);
	}
	catch (const std::exception& ex)
	{
		LazyExceptionHandler::TellMeWhatsWrongButDontDoAnythingToAddressIt(ex.what());
	}
	catch (...)
	{
		LazyExceptionHandler::TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt();
	}
}
// Set the wage
void HourlyWorker::setWage(double w)
{
	try
	{
		wage = w > 0 ? w : 0;
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
 
// Set the hours worked
void HourlyWorker::setHours(double h)
{
	try
	{
		hours = h >= 0 && h < 168 ? h : 0;
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

// Get the HourlyWorker's pay
double HourlyWorker::earnings(Date d) const
{
	try
	{
		if (hours <= 40) // no overtime
			return (wage * hours) + (d.isSameMonth(birthDate) ? 100 : 0);
		else // overtime is paid at wage * 1.5
			return (40 * wage + (hours - 40) * wage * 1.5) + (d.isSameMonth(birthDate) ? 100 : 0);
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

// Print the HourlyWorker's name 
void HourlyWorker::print() const
{
	try
	{
		std::cout << "      Hourly worker: ";
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

void HourlyWorker::fakeException()
{
	try
	{
		throw std::exception("This is a test (HourlyWorker)");
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
