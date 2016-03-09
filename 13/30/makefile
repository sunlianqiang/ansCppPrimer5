CC = g++
CPPFLAGS += --std=c++11
out:  30.o
	$(CC) $(CPPFLAGS) 30.o -o out 
30.o:30.cpp HasPtr.h
	$(CC) $(CPPFLAGS) -c 30.cpp HasPtr.h 

.PHONY:
	clean
clean:
	rm out 30.o

