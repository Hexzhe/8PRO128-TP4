#include "Camion.h"

Camion::Camion(std::string marque, std::string modele, std::string moteur)
{
}

Camion::~Camion()
{
	delete this->moteur;
}
