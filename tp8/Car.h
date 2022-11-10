#include "Vehicule.h"
class Car : public Vehicule
{
private:
	int passager;
public:
	Car();
	 void Initialise(int inRoues, float inPoids);
	 void affiche();
};