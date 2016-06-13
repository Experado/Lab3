all:Clock.o main.cpp A.cpp
		g++ -o test Clock.o main.cpp
		g++ -o A A.cpp
Clock.o:Clock.cpp Clock.h
		g++ -c Clock.cpp -o Clock.o
clean:
		rm Clock.o
		rm test
		rm A
