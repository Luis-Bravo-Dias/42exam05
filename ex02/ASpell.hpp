#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string name, std::string effects);
        ASpell(ASpell const & rhs);
        virtual ~ASpell();
        ASpell & operator=(ASpell const & rhs);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const = 0;
        void    launch(ATarget const & target) const;
    
    protected:
        std::string _name;
        std::string _effects;
};