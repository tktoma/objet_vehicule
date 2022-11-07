#include "Vehicule.h"
void Vehicule::Initialise(int NbRoues, float Poids)//constructeur utilisant des variable prédéfini
{
	poids = Poids;
	roues = NbRoues;
	std::cout << "appel de Vehicule::Initialise\n";
}
Vehicule::Vehicule()//constructeur par défault
{
	poids = 100;
	roues = 2;
}