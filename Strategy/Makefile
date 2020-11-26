CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o mallardduck.o duck.o flywithwings.o quack.o
	$(CC) main.o mallardduck.o duck.o flywithwings.o quack.o -o $(OBJ)

main.o: main.cpp mallardduck.o
	$(CC) $(CFLAGS) main.cpp
mallardduck.o: Ducks/MallardDuck.cpp duck.o flywithwings.o quack.o
	$(CC) $(CFLAGS) Ducks/MallardDuck.cpp
duck.o: Ducks/Duck.cpp
	$(CC) $(CFLAGS) Ducks/Duck.cpp
flywithwings.o: Behavior/FlyWithWings.cpp
	$(CC) $(CFLAGS) Behavior/FlyWithWings.cpp
quack.o: Behavior/Quack.cpp
	$(CC) $(CFLAGS) Behavior/Quack.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
