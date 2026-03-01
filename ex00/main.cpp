#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog s("Dunco");
	const Cat d("Micka");
	Animal q = Dog("Zara");
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << s.getType() << " " << std::endl;
	s.makeSound();
	std::cout << d.getType() << " " << std::endl;
	d.makeSound();
	std::cout << q.getType() << " " << std::endl;
	q.makeSound();
	meta->makeSound();
	std::cout << std::endl << std::endl;

	delete meta;
	delete j;
	delete i;
	return 0;
}