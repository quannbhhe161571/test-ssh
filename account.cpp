#include "account.h"

void Account::changePassword(){
	std::string newPassword;
	std::cout << "Enter your new password: ";
	std::getline(std::cin, newPassword);
	this->password = newPassword;
	//ghi newPassword vao database
}

