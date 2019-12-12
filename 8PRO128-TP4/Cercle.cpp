#include "Cercle.h"

Cercle::Cercle() : Ellipse()
{
	rayon = 0.0;
}

Cercle::Cercle(double r) : Ellipse()
{
	rayon = r;
}

double Cercle::aire() const
{
	return M_PI * pow(rayon, 2);
}

double Cercle::perimetre() const
{
	return 2 * M_PI * rayon;
}

double Cercle::diametre() const
{
	return 2 * rayon;
}

void Cercle::afficher(std::ostream& os) const
{
	os << "Cercle:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->rayon << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->diametre();
}

std::string Cercle::getEntete()
{
	return "rayon     aire      perim     diam";
}

std::istream& operator>>(std::istream& is, Cercle& cercle)
{
	is >> cercle.rayon;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cercle& cercle)
{
	cercle.afficher(os);
	return os;
}
