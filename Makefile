CC = g++
CFLAGS = -std=c++11 -Wall -g

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}
INCLS = ${SRCS:.cpp=.h} main.h


a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $*.cpp

clean:
	rm -f $(OBJS) a.out core
