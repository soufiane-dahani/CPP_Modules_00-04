#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _inventory[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource& operator=(const MateriaSource &other);
        ~MateriaSource();

        void learnMateria(AMateria*) override ;
        AMateria* createMateria(std::string const & type) override ;
};
