#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget(std::string type);
        ATarget(ATarget const & obj);
        virtual ~ATarget();
        ATarget & operator=(ATarget const & rhs);
        std::string getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(ASpell const & spell) const;
    
    protected:
        std::string _type;
};