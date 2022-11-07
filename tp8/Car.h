#include "Vehicule.h"
class Car : public Vehicule
{
private:
	int passager;
public:
	Car();
	 void initialise(int inRoues, float inPoids);
};