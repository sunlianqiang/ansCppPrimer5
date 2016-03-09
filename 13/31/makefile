CC = g++
CPPFLAGS += --std=c++11
out:  31.o
	$(CC) $(CPPFLAGS) 31.o -o out 
31.o:31.cpp HasPtr.h
	$(CC) $(CPPFLAGS) -c 31.cpp HasPtr.h 

.PHONY:
	clean
clean:
	rm out 31.o *.gch

