CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o gumball.o
	$(CC) main.o gumball.o -o $(OBJ)

main.o: main.cpp gumball.o
	$(CC) $(CFLAGS) main.cpp
gumball.o: Gumball.cpp
	$(CC) $(CFLAGS) Gumball.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
