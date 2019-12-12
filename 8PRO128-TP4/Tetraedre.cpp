#include "Tetraedre.h"

Tetraedre::Tetraedre() : TriangleEq()
{
}

Tetraedre::Tetraedre(double c) : TriangleEq(c)
{
}

double Tetraedre::aire() const
{
	return sqrt(3) * pow(TriangleEq::cote1, 2);
}

double Tetraedre::face() const
{
	return TriangleEq::aire();
}

double Tetraedre::volume() const
{
	return pow(TriangleEq::cote1, 3) * sqrt(2) / 12;

}

double Tetraedre::hauteur() const
{
	return sqrt(6) / 3 * TriangleEq::cote1;
}

void Tetraedre::afficher(std::ostream& os) const
{
	os << "Tetraedre:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->TriangleEq::cote1 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->face() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->volume() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->hauteur();
}

std::string Tetraedre::getEntete()
{
	return "cote      aire      face      vol       haut";
}

std::istream& operator>>(std::istream& is, Tetraedre& tetraedre)
{
	is >> tetraedre.cote1;
	tetraedre.cote3 = tetraedre.cote2 = tetraedre.cote1;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre)
{
	tetraedre.afficher(os);
	return os;
}
