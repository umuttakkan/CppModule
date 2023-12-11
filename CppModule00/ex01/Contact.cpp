#include "Contact.hpp"

const std::string Contact::get_Name() const
{
	return (Name);
}
const std::string Contact::getSurname() const
{
	return (Surname);
}
const std::string Contact::getNickname() const
{
	return (Nickname);
}
const std::string Contact::get_Phonenumber() const
{
	return (PhoneNumber);
}
const std::string Contact::get_secret() const
{
	return (Secret);
}      


void Contact::set_name(const std::string &x)
{
	Name = x;
}
void Contact::set_surname(const std::string &x)
{
	Surname = x;
}

void Contact::set_nickname(const std::string &x)
{
	Nickname = x;
}

void Contact::set_secret(const std::string &x)
{
	Secret = x;
}

void Contact::set_phonenumber(const std::string &x)
{
	PhoneNumber = x;
}