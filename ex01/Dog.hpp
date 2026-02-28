#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog();
		Dog(std::string _type);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		std::string getType(void) const;
		void makeSound() const;
};

#endif