#include <iostream>

class Warlock
{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;
        void    setTitle(std::string const & str);
        void    introduce() const;

    private:
        Warlock();
        Warlock(Warlock const & obj);
        Warlock & operator=(Warlock const & rhs);
        std::string _name;
        std::string _title;
};