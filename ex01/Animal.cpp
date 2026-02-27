#include "Animal.hpp"

Animal::Animal() :
	type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) :
	type(_type)
{
	std::cout << "Animal parametrized constructor called" << std::endl;
}

Animal::Animal(const Animal& other) :
	type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal assigment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal is quiet" << std::endl;
}