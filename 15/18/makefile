CC=g++ --std=c++11

out:Base.o main.o
	$(CC) Base.o main.o -o out 

Base.o:Base.cpp Base.h
	$(CC) -c Base.cpp Base.h
main.o:main.cpp
	$(CC) -c main.cpp
	
