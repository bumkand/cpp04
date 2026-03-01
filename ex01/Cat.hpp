#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		Cat(std::string _type);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		std::string getType(void) const;
		void makeSound() const;
		std::string getBrain(int i) const;
		void setBrain(int i, std::string idea);
};


#endif