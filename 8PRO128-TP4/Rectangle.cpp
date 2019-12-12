#include "Rectangle.h"

Rectangle::Rectangle() : Figure()
{
	largeur = 0.0;
	longueur = 0.0;
}

Rectangle::Rectangle(double lrg, double lng) : Figure()
{
	largeur = lrg;
	longueur = lng;
}

double Rectangle::aire() const
{
	return longueur * largeur;
}

double Rectangle::perimetre() const
{
	return (largeur + longueur) * 2;
}

double Rectangle::diagonale() const
{
	return sqrt(pow(largeur, 2) + pow(longueur, 2));
}

void Rectangle::afficher(std::ostream& os) const
{
	os << "Rectangle:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->largeur << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->longueur << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->diagonale();
}

std::string Rectangle::getEntete()
{
	return "larg      long      aire      perim     diago";
}

std::istream& operator>>(std::istream& is, Rectangle& rectangle)
{
	is >> rectangle.largeur >> rectangle.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
{
	rectangle.afficher(os);
	return os;
}
