CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main -pthread

all: $(OBJ)

$(OBJ): main.o
	$(CC) main.o -o $(OBJ)

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
