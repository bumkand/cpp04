#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string _type) :
	Animal(_type)
{
	std::cout << "Cat parametrized constructor called" << std::endl;
}

Cat::Cat(const Cat& other) :
	Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Cat assigment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType(void) const
{
	return Animal::type;
}

void Cat::makeSound() const
{
	std::cout << "Mnaaaaauuauauau" << std::endl;
}