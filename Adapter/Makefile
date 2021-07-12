CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o mallardduck.o wildturkey.o
	$(CC) main.o mallardduck.o wildturkey.o -o $(OBJ)

main.o: main.cpp mallardduck.o wildturkey.o
	$(CC) $(CFLAGS) main.cpp
mallardduck.o: Ducks/MallardDuck.cpp
	$(CC) $(CFLAGS) Ducks/MallardDuck.cpp
wildturkey.o: Turkeys/WildTurkey.cpp
	$(CC) $(CFLAGS) Turkeys/WildTurkey.cpp
exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
