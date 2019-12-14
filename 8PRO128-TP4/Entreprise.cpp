#include "Entreprise.h"

Entreprise::Entreprise()
{
	this->camions = new std::vector<Camion>();
}

Entreprise::~Entreprise()
{
	delete this->camions;
}

void Entreprise::addCamion(Camion camion)
{
	this->camions->push_back(camion);
}

void Entreprise::removeCamion()
{
	this->camions->pop_back();
}

size_t Entreprise::countCamion()
{
	return this->camions->size();
}

std::string Entreprise::getNom()
{
	return this->nom;
}

void Entreprise::setNom(std::string nom)
{
	this->nom = nom;
}
