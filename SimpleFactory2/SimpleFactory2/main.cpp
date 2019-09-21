#include "PizzaStore.h"
#include "NYPizzaFactory.h"


using namespace std;

int main()
{
	NYPizzaFactory ny_pizza_factory;
	PizzaStore pizza_store(ny_pizza_factory);
	Pizza* p_pizza = pizza_store.OrderPizza("greek");
	if (p_pizza)
	{
		delete p_pizza;
	}

	return 0;
}