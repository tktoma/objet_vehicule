#include <iostream>
class Vehicule {
private:
	int roues;
	float poids;
public:
	Vehicule();
	virtual void Initialise(int inRoues, float inPoids);
	virtual void affiche();
};

