CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o pizza.o nypizzastore.o pizzastore.o nypizzaingredientfactory.o cheesepizza.o pepperonipizza.o
	$(CC) main.o pizza.o nypizzastore.o pizzastore.o nypizzaingredientfactory.o cheesepizza.o pepperonipizza.o -o $(OBJ)

main.o: main.cpp nypizzastore.o
	$(CC) $(CFLAGS) main.cpp
pizza.o: Pizzas/Pizza.cpp
	$(CC) $(CFLAGS) Pizzas/Pizza.cpp
cheesepizza.o: Pizzas/CheesePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/CheesePizza.cpp
pepperonipizza.o: Pizzas/PepperoniPizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/PepperoniPizza.cpp
pizzastore.o: Stores/PizzaStore.cpp pizza.o
	$(CC) $(CFLAGS) Stores/PizzaStore.cpp
nypizzaingredientfactory.o: IngredientFactories/NYPizzaIngredientFactory.cpp
	$(CC) $(CFLAGS) IngredientFactories/NYPizzaIngredientFactory.cpp
nypizzastore.o: Stores/NYPizzaStore.cpp nypizzaingredientfactory.o pizzastore.o cheesepizza.o pepperonipizza.o
	$(CC) $(CFLAGS) Stores/NYPizzaStore.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
