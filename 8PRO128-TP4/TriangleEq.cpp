#include "TriangleEq.h"

TriangleEq::TriangleEq() : Triangle()
{
}

TriangleEq::TriangleEq(double c) : Triangle(c, c, c)
{
}

double TriangleEq::aire() const
{
	return Triangle::aire();
}

double TriangleEq::perimetre() const
{
	return Triangle::perimetre();
}

double TriangleEq::hauteur() const
{
	return Triangle::cote1 * sqrt(3) / 2;
}

void TriangleEq::afficher(std::ostream& os) const
{
	os << "TriangleEq:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->Triangle::cote1 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->hauteur();
}

std::string TriangleEq::getEntete()
{
	return "cote      aire      perim     haut ";
}

std::istream& operator>>(std::istream& is, TriangleEq& triangleEq)
{
	is >> triangleEq.cote1;
	triangleEq.cote3 = triangleEq.cote2 = triangleEq.cote1;

	return is;
}

std::ostream& operator<<(std::ostream& os, const TriangleEq& triangleEq)
{
	triangleEq.afficher(os);
	return os;
}
