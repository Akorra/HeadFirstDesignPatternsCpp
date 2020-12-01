CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o singleton.o
	$(CC) main.o singleton.o -o $(OBJ)

main.o: main.cpp singleton.o
	$(CC) $(CFLAGS) main.cpp
singleton.o: Singleton.cpp
	$(CC) $(CFLAGS) Singleton.cpp
	
exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
