out: 19.o StrBlob.o StrBlobPtr.o
	g++ 19.o StrBlob.o StrBlobPtr.o -o out --std=c++1
19.o: 19.cpp
	g++ 19.cpp --std=c++11
StrBlob.o: StrBlob.cpp StrBlob.h
	g++ -c StrBlob.cpp StrBlob.h --std=c++11
StrBlobPtr.o: StrBlobPtr.cpp StrBlobPtr.h
	g++ -c StrBlobPtr.cpp StrBlobPtr.h --std=c++11

clean:
	rm *o *gch a.out
