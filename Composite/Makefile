CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o menu.o
	$(CC) main.o menu.o -o $(OBJ)

main.o: main.cpp menu.o
	$(CC) $(CFLAGS) main.cpp
menu.o: Menu.cpp
	$(CC) $(CFLAGS) Menu.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
