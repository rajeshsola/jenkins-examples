all:banking-demo

banking-demo:bank.o account.o main.o
	g++ $^ -o $@ -fprofile-arcs -ftest-coverage -fPIC -O0 -std=c++14
%.o:%.cpp account.h bank.h
	g++ $< -c -fprofile-arcs -ftest-coverage -fPIC -O0 -std=c++14
clean:
	rm -rf *.o banking-demo *.gcda *.gcno *.gch
