#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string _type) :
	Animal(_type)
{
	brain = new Brain();
	std::cout << "Dog parametrized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) :
	Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Dog assigment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType(void) const
{
	return Animal::type;
}

void Dog::makeSound() const
{
	std::cout << "Haf haf haf" << std::endl;
}