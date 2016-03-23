obj = Sales_data.o 41.o
OPT = --std=c++11

test: $(obj)
	g++ -o test $(obj) $(OPT)

Sales_data.o: Sales_data.h
	g++ -c Sales_data.cpp $(OPT) 
41.o:
	g++ -c 41.cpp $(OPT)

.PHONY: clean 

clean:
	$(RM) $(obj) test

