#include "Car.h"
Car::Car()
{
	Vehicule::Initialise(6, 6500);// initialise les roue et le poids en utilisant la variable de vehicule
	passager = 70;//initialise les passager 
}

void Car::Initialise(int inRoues, float inPoids)
{
	Vehicule::Initialise(inRoues, inPoids);
	passager = 5;
	Vehicule::affiche();
	std::cout << passager << std::endl;
}


void Car::affiche()
{
	std::cout << passager << std::endl;
}
