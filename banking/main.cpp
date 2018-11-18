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
  b1.addAccount(1002,"abc2",8000);
  b1.addAccount(1003,"abc3",2000);
  b1.addAccount(1004,"abc4",1000);
  b1.addAccount(1005,"abc5",6000);
  b1.displayAll();
  b1.displayOne(1003);
  std::cout << b1.findMax() << "\n";
  std::cout << b1.findMin() << "\n";
  std::cout << b1.findAverage() << "\n";  
  return 0;
}
