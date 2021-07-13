CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o caffeinebeverage.o
	$(CC) main.o caffeinebeverage.o -o $(OBJ)

main.o: main.cpp caffeinebeverage.o
	$(CC) $(CFLAGS) main.cpp
caffeinebeverage.o: CaffeineBeverage.cpp
	$(CC) $(CFLAGS) CaffeineBeverage.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
