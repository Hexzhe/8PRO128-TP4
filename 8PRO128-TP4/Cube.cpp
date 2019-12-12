#include "Cube.h"

Cube::Cube() : Carre()
{
}

Cube::Cube(double c) : Carre(c)
{
}

double Cube::aire() const
{
	return 6 * Carre::aire();
}

double Cube::face() const
{
	return Carre::aire();
}

double Cube::volume() const
{
	return pow(Carre::largeur, 3);
}

void Cube::afficher(std::ostream& os) const
{
	os << "Cube:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->Carre::largeur << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->face() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->volume();
}

std::string Cube::getEntete()
{
	return "cote      aire      face      vol";
}

std::istream& operator>>(std::istream& is, Cube& cube)
{
	is >> cube.largeur >> cube.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cube& cube)
{
	cube.afficher(os);
	return os;
}
