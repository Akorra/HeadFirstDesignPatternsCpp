CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o weatherdata.o currentconditionsdisplay.o forecastdisplay.o statisticsdisplay.o
	$(CC) main.o weatherdata.o currentconditionsdisplay.o forecastdisplay.o statisticsdisplay.o -o $(OBJ)

main.o: main.cpp weatherdata.o currentconditionsdisplay.o
	$(CC) $(CFLAGS) main.cpp
weatherdata.o: Subject/WeatherData.cpp
	$(CC) $(CFLAGS) Subject/WeatherData.cpp
currentconditionsdisplay.o: Observers/CurrentConditionsDisplay.cpp
	$(CC) $(CFLAGS) Observers/CurrentConditionsDisplay.cpp
forecastdisplay.o: Observers/ForecastDisplay.cpp
	$(CC) $(CFLAGS) Observers/ForecastDisplay.cpp
statisticsdisplay.o: Observers/StatisticsDisplay.cpp
	$(CC) $(CFLAGS) Observers/StatisticsDisplay.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
