#include "ClassPeople.hpp"

People::People(void) :	_firstName("\0"),
			_lastName("\0"),
			_nickname("\0"),
			_login("\0"),
			_postalAddress("\0"),
			_emailAddress("\0"),
			_phoneNumber("\0"),
			_birthdayDate("\0"),
			_favoriteMeal("\0"),
			_underwearColor("\0"),
			_darkestSecret("\0")
{
	return ;
}

People::~People(void)
{
	return ;
}

void	People::init_people(void)
{
	People::_numberPeople++;
	std::cout << "Enter a first name : ";
	People::_entries(&this->_firstName);
	std::cout << "Enter a last name : ";
	People::_entries(&this->_lastName);
	std::cout << "Enter a nickname : ";
	People::_entries(&this->_nickname);
	std::cout << "Enter a login : ";
	People::_entries(&this->_login);
	std::cout << "Enter a postal address : ";
	People::_entries(&this->_postalAddress);
	std::cout << "Enter an email address : ";
	People::_entries(&this->_emailAddress);
	std::cout << "Enter a phone number : ";
	People::_entries(&this->_phoneNumber);
	std::cout << "Enter a birthday date : ";
	People::_entries(&this->_birthdayDate);
	std::cout << "Enter a favorite meal : ";
	People::_entries(&this->_favoriteMeal);
	std::cout << "Enter an underwear color : ";
	People::_entries(&this->_underwearColor);
	std::cout << "Enter the darkest secret : ";
	People::_entries(&this->_darkestSecret);
	std::cout << std::endl;
	return ;
}

void	People::display(void) const
{
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Login : " << this->_login << std::endl;
	std::cout << "Postal address : " << this->_postalAddress << std::endl;
	std::cout << "Email address : " << this->_emailAddress << std::endl;
	std::cout << "Phone number : " << this->_phoneNumber << std::endl;
	std::cout << "Birthday date : " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal : " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color : " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret : " << this->_darkestSecret << std::endl;
	std::cout << std::endl;
	return ;
}

std::string	People::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	People::getLastName(void) const
{
	return (this->_lastName);
}

std::string	People::getNickname(void) const
{
	return (this->_nickname);
}

void	People::_entries(std::string *str)
{
	std::getline(std::cin, *str);
	return ;
}

int	People::getNumberPeople(void)
{
	return (People::_numberPeople);
}

void	People::displayInfo(std::string str, int i)
{
	int	j;

	if ((j = str.length()) > 10)
	{
		j = 0;
		while (j < 9)
			std::cout << str[j++];
		if (i)
			std::cout << ".|";
		else
			std::cout << ".";
	}
	else
	{
		j = 10 - j;
		while (j > 0)
		{
			j--;
			std::cout << " ";
		}
		std::cout << str;
		if (i)
			std::cout << "|";
	}
	return ;
}

int	People::_numberPeople = 0;
