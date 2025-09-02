#include "Animal.h"
#include "AnimalsInZoo.h"
AnimalsInZoo::AnimalsInZoo(Animal a) {
	numAnimals = 1;
	animal = a;
}
AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}
void AnimalsInZoo::display() {
	std::cout << "numAnimals: " << numAnimals << std::endl;
	if(numAnimals == 1) {
		animal.display();
	}
}

