#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	ft_error()
{
	std::cout << "You made a mistake... Try Again" << std::endl;
}

int	main(void)
{
	std::string buffer;
	PhoneBook book;
	Contact contact;


	while (1)
	{
		std::cout << " Hello, Welcome to Chalou's Phonebook, ADD to add a contact, and SEARCH to find a contact, EXIT to quit the program" << std::endl;
		std::getline(std::cin, buffer);
		if (buffer == "ADD")
		{
			std::cout << "First Name: " << std::endl;
			std::getline(std::cin, buffer);
			if (contact.SetCheckFirstName(buffer) == 1)
			{
				std::cout << "Last Name: " << std::endl;
				std::getline(std::cin, buffer);
				if (contact.SetCheckLastName(buffer) == 1)
				{
					std::cout << "Nickname: " << std::endl;
					std::getline(std::cin, buffer);
					if (contact.SetCheckNickname(buffer) == 1)
					{
						std::cout << "Phone Number: " << std::endl;
						std::getline(std::cin, buffer);
						if (contact.SetCheckPhoneNumber(buffer) == 1)
						{
							std::cout << "Darkest Secret: " << std::endl;
							std::getline(std::cin, buffer);
							if (contact.SetCheckDarkestSecret(buffer) == 1)
								contact.SendAndCount(&book);
							else
								ft_error();
						}
						else
							ft_error();
					}
					else
						ft_error();
				}
				else
					ft_error();
			}
			else
				ft_error();
		}
		else if (buffer == "SEARCH")
		{
			book.SearchEngine();
			std::cout << "Give me an index : " << std::endl;
			std::getline(std::cin, buffer);
			if (buffer.length() == 1)
			{
				std::cout << "caca";
				if (std::isdigit(buffer[0]))
					book.PrintIndex(buffer[0] + 48);
				else
					ft_error();
			}
			else
				ft_error();
		}
		else if (buffer == "EXIT")
		{}
		else
			ft_error();
	}



}





/*int	main(void)
{
	std::string bjr[8][6];
	int i = 0;
	while (i < 8)
	{
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, bjr[i][0]);
	//std::cin >> bjr[0];
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, bjr[i][1]);
	//std::cin >> bjr[1];
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, bjr[i][2]);
	//std::cin >> bjr[2];
	std::cout << "Phone Number: " << std::endl;
	std::getline(std::cin, bjr[i][3]);
	//std::cin >> bjr[3];
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, bjr[i][4]);
	//std::cin >> bjr[4];
	std::cout << "bg ?" << std::endl;
	std::getline(std::cin, bjr[i][5]);
	//std::cin >> bjr[5];
	i++;
	};
	i = 0;

	while (i < 8)
	{
		std::cout << "Contact : No" << (i + 48) << std::endl;
	std::cout << bjr[i][0] << std::endl;
	std::cout << bjr[i][1] << std::endl;
	std::cout << bjr[i][2] << std::endl;
	std::cout << bjr[i][3] << std::endl;
	std::cout << bjr[i][4] << std::endl;
	std::cout << bjr[i][5] << std::endl;
	i++;
	}

	return 0;
}*/
