#pragma once
#include <vector>
#include "Camion.h"

class Entreprise
{
public:
	Entreprise(std::string nom = "No Name Inc.");
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

