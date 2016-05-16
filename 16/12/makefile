OBJS = main.cpp
CC = g++ 
CFLAGS = --std=c++11
out: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
