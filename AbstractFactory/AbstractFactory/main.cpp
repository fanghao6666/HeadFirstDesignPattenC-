#include "NYPizzaStore.h"
int main()
{
	NYPizzaStore pizza_store;
	Pizza *p_pizza = pizza_store.OrderPizza("greek");
	if (p_pizza)
	{
		delete p_pizza;
	}
	return 0;
}