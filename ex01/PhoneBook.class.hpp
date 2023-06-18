#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class PhoneBook
{
	private:
		std::string contacts[8][5];
	public:
		void	SetFirstName(int index, std::string FirstName);
		void	SetLastName(int index, std::string LastName);
		void	SetNickname(int index, std::string Nickname);
		void	SetPhoneNumber(int index, std::string PhoneNumber);
		void	SetDarkestSecret(int index, std::string DarkestSecret);
		void	SearchEngine();
		int		PrintIndex(int index);
};

#endif
