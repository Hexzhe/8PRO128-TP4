// Fig. 10.1: commis1.cpp
// Member function definitions for class CommissionWorker

#include "commis1.h"

// Constructor for class CommissionWorker
CommissionWorker::CommissionWorker(const char *first, const char *last, Date bd, double s, double c, int q) : Employee(first, last, bd)  // call base-class constructor
{
	try
	{
		setSalary(s);
		setCommission(c);
		setQuantity(q);
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

// Set CommissionWorker's weekly base salary
void CommissionWorker::setSalary(double s)
{
	try
	{
		salary = s > 0 ? s : 0;
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

// Set CommissionWorker's commission
void CommissionWorker::setCommission(double c)
{
	try
	{
		commission = c > 0 ? c : 0;
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

// Set CommissionWorker's quantity sold
void CommissionWorker::setQuantity(int q)
{
	try
	{
		quantity = q > 0 ? q : 0;
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

// Determine CommissionWorker's earnings
double CommissionWorker::earnings(Date d) const
{
	try
	{
		return (salary + commission * quantity) + (d.isSameMonth(birthDate) ? 100 : 0);
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

// Print the CommissionWorker's name 
void CommissionWorker::print() const
{
	try
	{
		std::cout << "  Commission worker: ";
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