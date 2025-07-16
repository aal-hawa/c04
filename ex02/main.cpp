#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal* meta = new Animal(); // should fail to compile now
	delete j;//should not create a leak
	delete i;

	std::cout << "\n--------- Animal Array Test ---------" << std::endl;

	Animal* animals[10];
	
	for(int j = 0; j < 5; j++)
		animals[j] = new Dog();
	for(int j = 5; j < 10; j++)
		animals[j] = new Cat();

	for(int j = 0; j < 10; j++)
		delete animals[j];
		
	return 0;
}