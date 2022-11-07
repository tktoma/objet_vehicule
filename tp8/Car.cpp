#include "Car.h"
Car::Car()
{
	Vehicule::Initialise(6, 6500);// initialise les roue et le poids en utilisant la variable de vehicule
	passager = 70;//initialise les passager 
}

void Car::initialise(int inRoues, float inPoids)
{
	passager = 5;
}
