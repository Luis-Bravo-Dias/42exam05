#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const & SpellName);
        ASpell* createSpell(std::string const &SpellName);
    
    private:
        SpellBook(SpellBook const & src);
        SpellBook & operator=(SpellBook const & src);
        std::map < std::string, ASpell*> _SpellBook;
};