CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o pizza.o nystylecheesepizza.o nystylepepperonipizza.o chicagostylecheesepizza.o chicagostylepepperonipizza.o chicagostyleveggiepizza.o chicagopizzastore.o nypizzastore.o pizzastore.o
	$(CC) main.o pizza.o nystylecheesepizza.o nystylepepperonipizza.o chicagostylecheesepizza.o chicagostylepepperonipizza.o chicagostyleveggiepizza.o chicagopizzastore.o nypizzastore.o pizzastore.o -o $(OBJ)

main.o: main.cpp chicagopizzastore.o nypizzastore.o
	$(CC) $(CFLAGS) main.cpp
pizza.o: Pizzas/Pizza.cpp
	$(CC) $(CFLAGS) Pizzas/Pizza.cpp
chicagostylecheesepizza.o: Pizzas/Chicago/ChicagoStyleCheesePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/Chicago/ChicagoStyleCheesePizza.cpp
chicagostylepepperonipizza.o: Pizzas/Chicago/ChicagoStylePepperoniPizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/Chicago/ChicagoStylePepperoniPizza.cpp
chicagostyleveggiepizza.o: Pizzas/Chicago/ChicagoStyleVeggiePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/Chicago/ChicagoStyleVeggiePizza.cpp
nystylecheesepizza.o: Pizzas/NY/NYStyleCheesePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/NY/NYStyleCheesePizza.cpp
nystylepepperonipizza.o: Pizzas/NY/NYStylePepperoniPizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/NY/NYStylePepperoniPizza.cpp
pizzastore.o: Stores/PizzaStore.cpp pizza.o
	$(CC) $(CFLAGS) Stores/PizzaStore.cpp
chicagopizzastore.o: Stores/ChicagoPizzaStore.cpp pizzastore.o chicagostylecheesepizza.o chicagostylepepperonipizza.o chicagostyleveggiepizza.o
	$(CC) $(CFLAGS) Stores/ChicagoPizzaStore.cpp
nypizzastore.o: Stores/NYPizzaStore.cpp pizzastore.o nystylecheesepizza.o nystylepepperonipizza.o
	$(CC) $(CFLAGS) Stores/NYPizzaStore.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
