#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string Name;
        std::string Surname;
        std::string Nickname;
        std::string PhoneNumber;
        std::string Secret;
    public:
        const std::string get_Name() const;
        const std::string getSurname() const;
        const std::string getNickname() const;
        const std::string get_Phonenumber() const;
        const std::string get_secret() const;      
        void set_name(const std::string &x);
        void set_surname(const std::string &x);
        void set_nickname(const std::string &x);
        void set_phonenumber(const std::string &x);
        void set_secret(const std::string &x);
};




#endif