#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string _type) :
	Animal(_type)
{
	std::cout << "Dog parametrized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) :
	Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog assigment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
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