OBJS = andquery.o binaryquery.o main.o notquery.o orquery.o query_base.o query.o queryresult.o textquery.o wordquery.o 
CC = g++ 
CFLAGS = --std=c++11
out: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
