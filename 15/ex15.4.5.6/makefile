CC = g++ --std=c++11
out:bulk_quote.o quote.o main.o
	$(CC) bulk_quote.o quote.o main.o -o out
main.o:main.cpp 
	$(CC) -c main.cpp 
quote.o:quote.cpp quote.h
	$(CC) -c quote.cpp quote.h
bulk_quote.o:bulk_quote.cpp bulk_quote.h
	$(CC) -c bulk_quote.cpp bulk_quote.h 
