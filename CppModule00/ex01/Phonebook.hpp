#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"
class Phonebook
{
    private:
        Contact data[8];
        int i;
        int y;
    public:
        Phonebook();
        void add();
        void search();
};

#endif
