CPPFLAGS += --std=c++11 -g
out: main.o String.o
	g++ $(CPPFLAGS) -o out main.o String.o
main.o:main.cpp
	g++ $(CPPFLAGS) main.cpp -c  
String.o:String.cpp String.h
	g++ $(CPPFLAGS) String.cpp String.h -c 

.PHONY:
	clean
clean:
	rm out *.o *.gch
