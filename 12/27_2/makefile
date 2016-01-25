a.out: TextQuery.o 27.o
	g++ -g -o a.out TextQuery.o 27.o --std=c++11
27.o: 27.cpp
	g++ -g -c 27.cpp --std=c++11
TextQuery.o: TextQuery.cpp TextQuery.h
	g++ -g -c TextQuery.cpp --std=c++11

clean:
	rm *.o a.out
