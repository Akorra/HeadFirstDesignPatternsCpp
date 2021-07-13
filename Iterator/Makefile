CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o waitress.o menu.o
	$(CC) main.o waitress.o menu.o -o $(OBJ)

main.o: main.cpp menu.o
	$(CC) $(CFLAGS) main.cpp
waitress.o: Waitress.cpp menu.o
	$(CC) $(CFLAGS) Waitress.cpp
menu.o: Menu.cpp
	$(CC) $(CFLAGS) Menu.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
