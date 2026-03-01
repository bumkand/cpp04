#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	std::cout << std::endl;

	Dog* a = new Dog();
	Dog* b = new Dog();

	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		a->setBrain(i, "Myslim");
		b->getBrain(i);
		std::cout << "[" << i << "] b dog [" << b->getBrain(i) << "]" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 100; i++)
	{
		a->getBrain(i);
		std::cout << "[" << i << "] a dog [" << a->getBrain(i) << "]" << std::endl;
	}
	std::cout << std::endl;

	Dog* c = new Dog(*a);
	for (int i = 0; i < 100; i++)
	{
		c->getBrain(i);
		std::cout << "[" << i << "] c dog [" << c->getBrain(i) << "]" << std::endl;
	}
	std::cout << std::endl;

	c->setBrain(29, "Som");
	c->setBrain(98, "Som");
	c->setBrain(45, "Som");
	c->setBrain(70, "Som");
	c->setBrain(203, "Som");

	for (int i = 0; i < 100; i++)
	{
		c->getBrain(i);
		std::cout << "[" << i << "] c dog [" << c->getBrain(i) << "]" << std::endl;
	}
	std::cout << std::endl;

	

	*b = *a;
	for (int i = 0; i < 100; i++)
	{
		b->getBrain(i);
		std::cout << "[" << i << "] b dog [" << b->getBrain(i) << "]" << std::endl;
	}
	std::cout << std::endl;


	delete a;
	delete b;
	delete c;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];
	
	return 0;
}