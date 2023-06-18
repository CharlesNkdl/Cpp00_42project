#include "PhoneBook.class.hpp"

void	PhoneBook::SetFirstName(int index, std::string FirstName)
{
	contacts[index][0] = FirstName;
};
void	PhoneBook::SetLastName(int index, std::string LastName)
{
	contacts[index][1] = LastName;
};
void	PhoneBook::SetNickname(int index, std::string Nickname)
{
	contacts[index][2] = Nickname;
};
void	PhoneBook::SetPhoneNumber(int index, std::string PhoneNumber)
{
	contacts[index][3] = PhoneNumber;
};
void	PhoneBook::SetDarkestSecret(int index, std::string DarkestSecret)
{
	contacts[index][4] = DarkestSecret;
};
void		PhoneBook::SearchEngine()
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	j = 0;
	while (++j < 46)
		std::cout << "#";
	std::cout << std::endl;
	j = 0;
	std::cout << "#   INDEX  | 1st name | last name| nickname #" << std::endl;
	std::cout << "###########|##########|##########|###########" << std::endl;
	/*if (!(this->contacts[0][0].empty()))
		return ;*/
	while (i != 8)
	{
		std::cout << "#";
		while (j < 4)
		{
			if (j == 0)
				std::cout <<"         " << i+1;
			else if (this->contacts[i][j-1].length() < 10)
				std::cout << std::setw(10) << std::right << this->contacts[i][j-1];
			else
				std::cout <<this->contacts[i][j-1].substr(0,9) << ".";
			if (j == 0 || j != 3)
				std::cout << "|";
			j++;
		}
		std::cout << "#";
		i++;
		std::cout << std::endl;
		j = 0;
	}
	std::cout << "#############################################" << std::endl;
}

int		PhoneBook::PrintIndex(int index)
{
	int 	i;

	i = 0;
	std::cout << "caca";
	if (this->contacts[index - 1])
	{
		while (i != 6)
		{
			std::cout << this->contacts[index-1][i] << std::endl;
		}
		return (1);
	}
	else
		return (0);
}
