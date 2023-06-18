#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	Contact::SetCheckFirstName(std::string str)
{
	long unsigned int i;

	i = -1;
	if (str.empty())
		return 0;
	while (++i < str.length())
	{
		if (!std::isalpha(str[i]))
			return 0;
	}
	this->FirstName = str;
	return (1);
};

int	Contact::SetCheckLastName(std::string str)
{
	long unsigned int i;

	i = -1;
	if (str.empty())
		return 0;
	while (++i < str.length())
	{
		if (!std::isalpha(str[i]))
			return 0;
	}
	this->LastName = str;
	return (1);
};

int	Contact::SetCheckNickname(std::string str)
{
	if (str.empty())
		return 0;
	this->Nickname = str;
	return (1);
};

int	Contact::SetCheckPhoneNumber(std::string str)
{
	long unsigned int i;

	i = -1;
	if (str.empty() || !((str.length()) == 10))
		return 0;
	while (++i < str.length())
	{
		if (!std::isdigit(str[i]))
			return 0;
	}
	this->PhoneNumber = str;
	return (1);
};

int	Contact::SetCheckDarkestSecret(std::string str)
{
	if (str.empty())
		return 0;
	this->DarkestSecret = str;
	return (1);
};

void	Contact::SendAndCount(PhoneBook *book)
{
	static	int sending = 0;

	if (sending == 8)
		sending = 0;
	book->SetFirstName(sending,  this->FirstName);
	book->SetLastName(sending, this->LastName);
	book->SetNickname(sending, this->Nickname);
	book->SetPhoneNumber(sending, this->PhoneNumber);
	book->SetDarkestSecret(sending, this->DarkestSecret);
	sending++;
};
