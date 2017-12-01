#include "ClassPeople.hpp"

static void	message(void)
{
	std::cout << "Options:" << std::endl
		<< "ADD: Allow the user to register a new contact's ";
	std::cout << "informations" << std::endl
		<< "SEARCH: Display all the contacts' informations ";
	std::cout << "that were saved in the phone book" << std::endl
		<< "EXIT: Exit the program and all the data saved will be lost"
		<< std::endl << std::endl;
	std::cout << "Type one of the options above : ";
}

static void	displayList(People *personne)
{
	int	i;
	int	nbPeople;
	std::string	str;

	nbPeople = People::getNumberPeople();
	std::cout << std::endl;
	while (1)
	{
		i = 0;
		std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
		std::cout << "__________|__________|__________|__________" << std::endl;
		while (i < nbPeople)
		{
			std::cout << "         " << i << "|";
			People::displayInfo(personne[i].getFirstName(), 1);
			People::displayInfo(personne[i].getLastName(), 1);
			People::displayInfo(personne[i].getNickname(), 0);
			i++;
		}
		std::cout << std::endl << std::endl;
		std::cout << "Choose an index to get all the informations : ";
		std::getline(std::cin, str);
		i = std::stoi(str);
		if (i >= 0 && i < nbPeople)
			break ;
		else
			std::cout << "Error: Choose a number between 0 and "
				<< nbPeople - 1 << std::endl << std::endl;
	}
	std::cout << std::endl;
	personne[i].display();
}

int	main(int argc, char **argv)
{
	People		personne[8];
	int		i;
	std::string	option;

	(void)argv;
	if (argc == 1)
		while (1)
		{
			message();
			std::getline(std::cin, option);
			if (!option.compare("ADD"))
			{
				if (People::getNumberPeople() < 8)
				{
					personne[i].init_people();
					i++;
				}
				else
				{
					std::cout << "Error: You can't add more than ";
					std::cout << "8 contacts in the phone book"
						<< std::endl << std::endl;
				}
			}
			else if (!option.compare("SEARCH"))
				displayList(personne);
			else if (!option.compare("EXIT"))
				break ;
			else
			{
				std::cout << "Error: Invalid option. Please type ";
				std::cout << "\"ADD\", \"SEARCH\" or \"EXIT\""
					<< std::endl << std::endl;
			}
		}
	else
	{
		std::cout << "Error: This program doesn't take any parameter.";
		std::cout << std::endl;
	}
	return (0);
}
