#include "Sphere.h"

Sphere::Sphere() : Cercle()
{
}

Sphere::Sphere(double r) : Cercle(r)
{
}

double Sphere::diametre() const
{
	return 2 * Cercle::rayon;
}

double Sphere::aire() const
{
	return 4 * Cercle::aire();
}

double Sphere::volume() const
{
	return 4 * M_PI * pow(Cercle::rayon, 3) / 3;
}

void Sphere::afficher(std::ostream& os) const
{
	os << "Sphere:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->Cercle::rayon << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->diametre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->volume();
}

std::string Sphere::getEntete()
{
	return "rayon     diam      aire      vol";
}

std::istream& operator>>(std::istream& is, Sphere& sphere)
{
	is >> sphere.rayon;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Sphere& sphere)
{
	sphere.afficher(os);
	return os;
}
