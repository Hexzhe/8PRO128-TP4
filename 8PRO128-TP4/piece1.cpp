// Fig. 10.1: piece1.cpp
// Member function definitions for class PieceWorker

#include "piece1.h"

// Constructor for class PieceWorker
PieceWorker::PieceWorker(const char *first, const char *last, Date bd, double w, int q) : Employee(first, last, bd)  // call base-class constructor
{
	setWage(w);
	setQuantity(q);
}
 
// Set the wage
void PieceWorker::setWage(double w)
{
	wagePerPiece = w > 0 ? w : 0;
}

// Set the number of items output
void PieceWorker::setQuantity(int q)
{
	quantity = q > 0 ? q : 0;
}

// Determine the PieceWorker's earnings
double PieceWorker::earnings(Date d) const
{
	return (quantity * wagePerPiece) + (d.isSameMonth(birthDate) ? 100 : 0);
}

// Print the PieceWorker's name 
void PieceWorker::print() const
{
	std::cout << "       Piece worker: ";
	Employee::print();
}