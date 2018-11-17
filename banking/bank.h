#include "account.h"
#include <vector>
#include <string>
class Banking {
  std::vector<Account> accounts;

public:
  void addAccount(int, std::string, double);
  void updateAccount();
  void deleteAccount();
  void displayAll() const;
  void displayOne(int) const;
  void findMax() const;
  void findMin() const;
  void findAverage() const;
};
