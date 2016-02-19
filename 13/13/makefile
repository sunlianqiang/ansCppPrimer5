CC = g++
CPPFLAGS += --std=c++11
out:X.o
	$(CC) $(CPPFLAGS) X.o -o out
X.o:X.cpp
	$(CC) $(CPPFLAGS) X.cpp -c 
.PHONY:
	clean
clean:
	rm out
