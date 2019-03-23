OBJS	= classes/Company.o classes/Employee.o classes/Date.o main.o
SOURCE	= classes/Company.cpp classes/Employee.cpp classes/Date.cpp main.cpp
HEADER	= classes/Company.h classes/Employee.h classes/Date.h
OUT	= companies-admin
CC	 = g++
FLAGS	 = -g -std=c++11 -c -Wall -O0
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)
	make clean
classes/Company.o: classes/Company.cpp
	$(CC) $(FLAGS) classes/Company.cpp 

classes/Employee.o: classes/Employee.cpp
	$(CC) $(FLAGS) classes/Employee.cpp 

classes/Date.o: classes/Date.cpp
	$(CC) $(FLAGS) classes/Date.cpp 

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)