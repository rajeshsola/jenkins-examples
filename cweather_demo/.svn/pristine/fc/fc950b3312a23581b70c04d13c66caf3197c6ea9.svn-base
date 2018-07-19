
all: weatherdemo

weatherdemo: test.o weather.o common.o temperature.o humidity.o pressure.o
	gcc $^ -o $@ -g
%.o:%.c %.h common.h
	gcc -c $< -g
clean:
	rm -f *.o weatherdemo
