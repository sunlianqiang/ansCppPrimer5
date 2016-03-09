out:34.o
	g++ -o out 34.o --std=c++11
34.o:34.cpp Message.h
	g++ -c 34.cpp Message.h --std=c++11

.PHONY:
	clean
clean:
	rm out *.o *.gch
