#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "PhoneBook.class.hpp"

class Contact
{
	private :
		std::string FirstName;
		std::string LastName;
		std::string	Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public :
		int	SetCheckFirstName(std::string str);
		int	SetCheckLastName(std::string str);
		int	SetCheckNickname(std::string str);
		int	SetCheckPhoneNumber(std::string str);
		int	SetCheckDarkestSecret(std::string str);
		void	SendAndCount(PhoneBook *book);
};

#endif // !CONTACT_HPP
