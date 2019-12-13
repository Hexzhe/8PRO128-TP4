// Fig. 10.1: piece1.cpp
// Member function definitions for class PieceWorker

#include "piece1.h"

// Constructor for class PieceWorker
PieceWorker::PieceWorker(const char *first, const char *last, Date bd, double w, int q) : Employee(first, last, bd)  // call base-class constructor
{
	try
	{
		setWage(w);
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
 
// Set the wage
void PieceWorker::setWage(double w)
{
	try
	{
		wagePerPiece = w > 0 ? w : 0;
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

// Set the number of items output
void PieceWorker::setQuantity(int q)
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

// Determine the PieceWorker's earnings
double PieceWorker::earnings(Date d) const
{
	try
	{
		return (quantity * wagePerPiece) + (d.isSameMonth(birthDate) ? 100 : 0);
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

// Print the PieceWorker's name 
void PieceWorker::print() const
{
	Employee::print();
	try
	{
		std::cout << "       Piece worker: ";
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