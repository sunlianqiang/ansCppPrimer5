CPPFLAGS += --std=c++11

out:Num.o
	g++ $(CPPFLAGS)	Num.o -o out 
Num.o:Num.cpp
	g++ $(CPPFLAGS)	-c Num.cpp
.PHONY:
	clean
clean:
	rm out *.o
