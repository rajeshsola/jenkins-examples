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
  for (auto &a1 : accounts) {
    a1.display();
  }
}
void Banking::displayOne(int id) const {
  for (auto &ref : accounts) {
    if (ref.getId() == id)
      ref.display();
  }
  double Banking::findMax() const {
    return std::max_element(
        accounts.begin(), accounts.end(),
        [](auto &r1, auto &r2) { return r1.getBalance() < r2.getBalance(); });
  }
  double Banking::findMin() const {
    return std::max_element(
        accounts.begin(), accounts.end(),
        [](auto &r1, auto &r2) { return r1.getBalance() < r2.getBalance(); });
  }
  double Banking::findAverage() const {
    double sum = 0;
  std::for_each(accounts.begin(),accounts.end(),[](auto& ref) {
      sum += ref.getBalance();
  }
  return sum/accounts.size();
  }
