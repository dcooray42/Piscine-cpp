#ifndef CLASSPEOPLE_HPP
# define CLASSPEOPLE_HPP

# include <iostream>
# include <string>

class	People
{
public	:
	People(void);
	~People(void);

	void	init_people(void);
	void	display(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	static	int	getNumberPeople(void);
	static	void	displayInfo(std::string str, int i);

private :
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	static int	_numberPeople;

	void	_entries(std::string *str);
};

#endif
