#include "account.h"

Account::Account(int x, std::string s1, double y)
    : accountId(x), accName(s1), balance(y) {}
Account::Account(const Account &ref)
    : accountId(ref.accountId), accName(ref.accName),
      balance(ref.balance) {}
Account::~Account() {}
void Account::credit(double amount) { balance += amount; }
void Account::debit(double amount) { balance -= amount; }
