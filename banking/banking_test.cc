#include <limits.h>
#include "account.h"
#include "bank.h"
#include "gtest/gtest.h"
namespace {   //anonymous namespace
  TEST(AccountTest, Constructors) {
    Account a1(1001,"abcd",5000);
    EXPECT_EQ(5000, a1.getBalance());
    EXPECT_EQ(1001, a1.getId());    
  }
  TEST(AccountTest, Transactions) {
    Account a1(1001,"abcd",5000);
    a1.credit(3000);
    a1.debit(4500);
    EXPECT_EQ(3500, a1.getBalance());
    EXPECT_EQ(1001, a1.getId());    
  }
}
int main(int argc,char* argv[]) {
  ::testing::GTEST_FLAG(output) = "xml:gtest_results.xml";
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
