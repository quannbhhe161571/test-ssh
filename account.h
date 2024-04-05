#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
class Account{
private:
  std::string account;
  std::string password;
public:
  void changePassword();
};
#endif
