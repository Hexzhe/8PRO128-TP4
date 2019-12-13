#pragma once
#include <string>

class Moteur
{
public:
	std::string getModele();
private:
	Moteur(std::string m = "WD-40");
	~Moteur();
	friend class Camion;

	std::string modele;
};

