CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o amplifier.o
	$(CC) main.o amplifier.o -o $(OBJ)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
amplifier.o: HomeTheatre/Amplifier.cpp
	$(CC) $(CFLAGS) HomeTheatre/Amplifier.cpp
exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
