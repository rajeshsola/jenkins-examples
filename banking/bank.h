#ifndef __BANKING_H
#define __BANKING_H

#include "account.h"
#include <vector>
#include <algorithm>
#include <string>
class Banking {
  std::vector<Account> accounts;

public:
  void addAccount(int, std::string, double);
  void updateAccount(int,std::string);
  void deleteAccount();
  void displayAll() const;
  void displayOne(int) const;
  double findMax() const;
  double findMin() const;
  double findAverage() const;
};

#endif
