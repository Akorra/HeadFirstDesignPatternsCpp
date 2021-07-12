CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o mallardduck.o duck.o mutequack.o squeak.o quack.o flywithwings.o flynoway.o
	$(CC) main.o mallardduck.o duck.o mutequack.o squeak.o quack.o flywithwings.o flynoway.o -o $(OBJ)

main.o: main.cpp mallardduck.o mutequack.o squeak.o quack.o flywithwings.o flynoway.o
	$(CC) $(CFLAGS) main.cpp
mallardduck.o: Ducks/MallardDuck.cpp duck.o flywithwings.o quack.o
	$(CC) $(CFLAGS) Ducks/MallardDuck.cpp
duck.o: Ducks/Duck.cpp
	$(CC) $(CFLAGS) Ducks/Duck.cpp
flynoway.o: Behavior/FlyNoWay.cpp
	$(CC) $(CFLAGS) Behavior/FlyNoWay.cpp
flywithwings.o: Behavior/FlyWithWings.cpp
	$(CC) $(CFLAGS) Behavior/FlyWithWings.cpp
quack.o: Behavior/Quack.cpp
	$(CC) $(CFLAGS) Behavior/Quack.cpp
squeak.o: Behavior/Squeak.cpp
	$(CC) $(CFLAGS) Behavior/Squeak.cpp
mutequack.o: Behavior/MuteQuack.cpp
	$(CC) $(CFLAGS) Behavior/MuteQuack.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
