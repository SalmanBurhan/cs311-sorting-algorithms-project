OBJS	= main.o sorting.o utils.o
SOURCE	= main.cpp sorting.cpp utils.cpp
HEADER	= sorting.h table.h utils.h
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall -Wextra
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp table.h
	$(CC) $(FLAGS) main.cpp -std=c++11

sorting.o: sorting.cpp
	$(CC) $(FLAGS) sorting.cpp -std=c++11

utils.o: utils.cpp
	$(CC) $(FLAGS) utils.cpp -std=c++11

clean:
	rm -f $(OBJS) $(OUT)
