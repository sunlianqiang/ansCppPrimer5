CPPFLAGS += --std=c++11
out:String.o
	g++ $(CPPFLAGS) String.o -o out 
String.o:String.cpp String.h
	g++ $(CPPFLAGS) String.cpp String.h -c 

.PHONY:
	clean
clean:
	rm out *.o *.gch
