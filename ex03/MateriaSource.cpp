#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    // std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
        materias[i] = other.materias[i]->clone();
    // std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (other.materias[i] != NULL)
                materias[i] = other.materias[i]->clone();
            else
                materias[i] = NULL;
        }
    }
    // std::cout << "MateriaSource assigment operator called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL)
        {
            delete materias[i];
            materias[i] = NULL;
        }
    }
    // std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* _materias)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = _materias->clone();
            // delete _materias;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & _materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == _materia)
            return materias[i]->clone();
    }
    return NULL;
}
