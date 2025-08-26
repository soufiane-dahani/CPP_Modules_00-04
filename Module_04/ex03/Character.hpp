#pragma once
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];

    public:
        Character();
        Character(std::string name);
        Character(const Character &other);
        Character& operator=(const Character &other);
        ~Character();

        std::string const & getName() const override;
        void equip(AMateria* m) override;             
        void unequip(int idx) override;             
        void use(int idx, ICharacter& target) override;
};
