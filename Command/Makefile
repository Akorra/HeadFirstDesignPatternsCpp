CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o remotecontrol.o light.o
	$(CC) main.o remotecontrol.o light.o -o $(OBJ)

main.o: main.cpp remotecontrol.o
	$(CC) $(CFLAGS) main.cpp
remotecontrol.o: RemoteControl.cpp light.o
	$(CC) $(CFLAGS) RemoteControl.cpp
light.o: Appliances/Light.cpp
	$(CC) $(CFLAGS) Appliances/Light.cpp
exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
