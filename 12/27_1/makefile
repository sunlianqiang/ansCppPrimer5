a.out: ex12_27_30.o ex12_27_30_TEST.o
	g++ ex12_27_30.o ex12_27_30_TEST.o --std=c++11
ex12_27_30.o: ex12_27_30.cpp  ex12_27_30.h
	g++ -c ex12_27_30.cpp --std=c++11
ex12_27_30_TEST.o:
	g++ -c ex12_27_30_TEST.cpp --std=c++11

clean:
	rm a.out *.o
