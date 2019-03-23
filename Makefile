OBJS	= main.o classes/Employee.o classes/Date.o classes/Company.o  
SOURCE	= main.cpp classes/Employee.cpp classes/Company.cpp classes/Date.cpp
HEADER	= classes/Employee.h classes/Company.h classes/Date.h
OUT	= companies-employees-admin
CC	 = g++
FLAGS	 = -std=c++11 -g -Wall -O0 -l ./classes/
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp     
	$(CC) $(FLAGS) -c main.cpp

Employee.o: classes/Employee.h classes/Employee.cpp
	$(CC) $(FLAGS) -c classes/Employee.cpp

Company.o: 
	$(CC) $(FLAGS) -c ssda

Date.o: classes/Date.cpp classes/Date.h
	$(CC) $(FLAGS) -c classes/Date.h

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)