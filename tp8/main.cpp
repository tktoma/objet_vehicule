#include "Car.h"
int main()
{
	Vehicule objR4; // l1
	Car objCar; // l2
	objR4 = objCar; // l3 : initialisation de l�objet objR4 � partir de l�objet objCar
	objR4.Initialise(4, 500);// l4 : appel de la m�thode Vehicule::Initialise et non Car::initialise
 }