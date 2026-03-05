#include "Character.hpp"

Character::Character() :
	name("Default")
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    // std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const & name) :
	name(name)
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
	// std::cout << "Character parametrized constructor called" << std::endl;
}

Character::Character(const Character& other)
{
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
	// std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
	// std::cout << "Character assigment operator called" << std::endl;
	return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
    }
	// std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (inventory[idx])
            inventory[idx]->use(target);
    }
}