#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <string>

class Account {
  int accountId;
  std::string accName;
  double balance;

public:
  Account(int x, std::string y, double z);
  Account(const Account &);
  ~Account();
  void credit(double);
  void debit(double);
  double balanceEnquiry() // treated inline
  {
    return balance;
  }
};

#endif
