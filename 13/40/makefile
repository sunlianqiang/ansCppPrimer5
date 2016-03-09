CPPFLAGS += --std=c++11
out:StrVec.o
	g++ $(CPPFLAGS) StrVec.o -o out 
StrVec.o:StrVec.cpp StrVec.h
	g++ $(CPPFLAGS) StrVec.cpp StrVec.h -c 

.PHONY:
	clean
clean:
	rm out *.o *.gch
