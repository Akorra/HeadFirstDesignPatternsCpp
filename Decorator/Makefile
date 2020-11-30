CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o mocha.o soy.o whip.o darkroast.o houseblend.o espresso.o
	$(CC) main.o mocha.o soy.o whip.o darkroast.o houseblend.o espresso.o -o $(OBJ)

main.o: main.cpp mocha.o soy.o whip.o darkroast.o houseblend.o espresso.o
	$(CC) $(CFLAGS) main.cpp
mocha.o: Beverages/Mocha.cpp
	$(CC) $(CFLAGS) Beverages/Mocha.cpp
soy.o: Beverages/Soy.cpp
	$(CC) $(CFLAGS) Beverages/Soy.cpp
whip.o: Beverages/Whip.cpp
	$(CC) $(CFLAGS) Beverages/Whip.cpp
darkroast.o: Beverages/DarkRoast.cpp
	$(CC) $(CFLAGS) Beverages/DarkRoast.cpp
houseblend.o: Beverages/HouseBlend.cpp
	$(CC) $(CFLAGS) Beverages/HouseBlend.cpp
espresso.o: Beverages/Espresso.cpp
	$(CC) $(CFLAGS) Beverages/Espresso.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
