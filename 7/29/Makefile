COMPILE_OPT= --std=c++11
obj = 27.o Screen.o
a.out: $(obj)
	g++ -o a.out $(obj) $(COMPILE_OPT()
27.o:
	g++ -c 27.cpp $(COMPILE_OPT)
Screen.o:
	g++ -c Screen.cpp $(COMPILE_OPT)

.PHNOY: clean
clean:
	$(RM) a.out $(obj)
