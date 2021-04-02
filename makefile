CC=g++
CFLAGS=-Wall -std=c++11 -g -pthread
SRCS=p.cpp
EXECUTABLE=p

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS)
							 $(CC) $(CFLAGS) $(SRCS) -o $(EXECUTABLE)

run: $(EXECUTABLE)
		 ./$(EXECUTABLE)

clean:
	rm $(EXECUTABLE)
