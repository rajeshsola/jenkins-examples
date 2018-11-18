#include<iostream>
#include "account.h"
#include "bank.h"
#include "sample.h"

int main() {
  Account *ptr = new Account(1001, "abcd", 5000);
  ptr->debit(800);
  ptr->credit(1200);
  std::cout << ptr->getBalance() << std::endl;
  //delete ptr;

  Banking b1;
  b1.addAccount(1001,"abcd",5000);
  b1.displayAll();
  
}
