CC = clang++
CFLAGS = -std=c++17 -Wall -c
OBJ = main

all: $(OBJ)

$(OBJ): main.o pizza.o cheesepizza.o pepperonipizza.o clampizza.o veggiepizza.o simplepizzafactory.o pizzastore.o
	$(CC) main.o pizza.o cheesepizza.o pepperonipizza.o clampizza.o veggiepizza.o simplepizzafactory.o pizzastore.o -o $(OBJ)

main.o: main.cpp pizzastore.o
	$(CC) $(CFLAGS) main.cpp
pizza.o: Pizzas/Pizza.cpp
	$(CC) $(CFLAGS) Pizzas/Pizza.cpp
cheesepizza.o: Pizzas/CheesePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/CheesePizza.cpp
pepperonipizza.o: Pizzas/PepperoniPizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/PepperoniPizza.cpp
clampizza.o: Pizzas/ClamPizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/ClamPizza.cpp
veggiepizza.o: Pizzas/VeggiePizza.cpp pizza.o
	$(CC) $(CFLAGS) Pizzas/VeggiePizza.cpp
simplepizzafactory.o: SimplePizzaFactory.cpp cheesepizza.o pepperonipizza.o clampizza.o veggiepizza.o
	$(CC) $(CFLAGS) SimplePizzaFactory.cpp
pizzastore.o: PizzaStore.cpp simplepizzafactory.o
	$(CC) $(CFLAGS) PizzaStore.cpp

exec:
	./$(OBJ)

clean:
	rm -rf main
	rm -rf *.exe
	rm -rf *.o
