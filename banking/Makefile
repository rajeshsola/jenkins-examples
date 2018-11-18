all:banking-demo banking-gtest

banking-demo:bank.o account.o main.o
	g++ $^ -o $@ -std=c++14
banking-gtest:bank.o account.o banking_test.o lib/libgtest.a
	g++ -isystem ./include -g -Wall -Wextra -pthread -lpthread $^ -o $@
banking_test.o:banking_test.cc bank.h account.h
	g++ -isystem ./include -g -Wall -Wextra -pthread -c $< 
%.o:%.cpp account.h bank.h
	g++ $< -c -std=c++14
clean:
	rm -rf *.o banking-demo *.gcda *.gcno *.gch
