#include "bank.h"

void Banking::addAccount(int x, std::string s1, double y) {
  accounts.push_back(Account(x, s1, y));
}
void Banking::updateAccount(int id, std::string name) {
  for (auto &ref : accounts) {
    if (ref.getId() == id)
      ref.updateName(name);
  }
}
void Banking::deleteAccount() {}
void Banking::displayAll() const {
  for (const auto &a1 : accounts) {
    a1.display();
  }
}
void Banking::displayOne(int id) const {
  for (const auto &ref : accounts) {
    if (ref.getId() == id)
      ref.display();
  }
}
double Banking::findMax() {
  auto res=std::max_element(
      accounts.begin(), accounts.end(),
      [](auto &r1,auto &r2) { return r1.getBalance() < r2.getBalance(); });
  return res->getBalance();
}
double Banking::findMin() {
  auto res=std::max_element(
      accounts.begin(), accounts.end(),
      [](auto &r1, auto &r2) { return r1.getBalance() < r2.getBalance(); });
  return res->getBalance();
}
double Banking::findAverage()  {
  double sum = 0;
  std::for_each(accounts.begin(),accounts.end(),[&sum](auto& ref) {
    sum += ref.getBalance();
  });
  return sum/accounts.size();
}
