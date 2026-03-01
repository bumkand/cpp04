#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string _type) :
	Animal(_type)
{
	brain = new Brain();
	std::cout << "Cat parametrized constructor called" << std::endl;
}

Cat::Cat(const Cat& other) :
	Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Cat assigment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
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

std::string Cat::getBrain(int i) const
{
	return brain->getIdeas(i);
}

void Cat::setBrain(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		brain->setIdeas(i, idea);
	else
		std::cout << "Out of bounds" << std::endl;
}