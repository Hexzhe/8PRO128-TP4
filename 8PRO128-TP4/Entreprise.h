#pragma once
#include <vector>
#include "Camion.h"

class Entreprise
{
public:
	Entreprise();
	~Entreprise();

	void addCamion(Camion camion);
	void removeCamion();
	size_t countCamion();
	std::string getNom();
	void setNom(std::string nom);
private:
	std::vector<Camion>* camions;
	std::string nom;
};

