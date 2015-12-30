out: 12_20.o 12_19.o
	g++ -o out 12_19.o 12_20.o --std=c++11
12_20.o: 12_20.cpp
	g++ -c 12_20.cpp -o 12_20.o --std=c++11
12_19.o: 12_19.h 12_19.cpp
	g++ -c 12_19.cpp -o 12_19.o --std=c++11
clean:
	rm out *o
