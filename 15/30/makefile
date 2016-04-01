CC = g++ -g --std=c++11
out:bulk_quote.o disc_quote.o quote.o main.o basket.o
	$(CC) bulk_quote.o disc_quote.o quote.o basket.o main.o -o out
main.o:main.cpp 
	$(CC) -c main.cpp 
quote.o:quote.cpp quote.h
	$(CC) -c quote.cpp quote.h
disc_quote.o:disc_quote.cpp disc_quote.h
	$(CC) -c disc_quote.cpp disc_quote.h 
bulk_quote.o:bulk_quote.cpp bulk_quote.h
	$(CC) -c bulk_quote.cpp bulk_quote.h 
basket.o:basket.cpp basket.h
	$(CC) -c basket.cpp basket.h

.PHONY:
	clean
clean:
	rm *.o *.gch out
