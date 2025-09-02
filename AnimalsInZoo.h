#pragma once
#include <stdlib.h>
#include <iostream>
#include "Animal.h"
class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal a);
		AnimalsInZoo();
		void display();
	private:
		unsigned int numAnimals;
		Animal animal; 
};

