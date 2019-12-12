#include "Carre.h"

Carre::Carre() : Rectangle()
{
}

Carre::Carre(double c) : Rectangle(c, c)
{
}

double Carre::aire() const
{
	auto x = pow(Rectangle::largeur, 2);
	return x;
}

double Carre::perimetre() const
{
	return 4 * Rectangle::largeur;
}

double Carre::diagonale() const
{
	return sqrt(aire() * 2);
}

void Carre::afficher(std::ostream& os) const
{
	os << "Carre:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->Rectangle::largeur << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->diagonale();
}

std::string Carre::getEntete()
{
	return "cote      aire      perim     diago";
}

std::istream& operator>>(std::istream& is, Carre& carre)
{
	is >> carre.largeur;
	carre.longueur = carre.largeur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre)
{
	carre.afficher(os);
	return os;
}
