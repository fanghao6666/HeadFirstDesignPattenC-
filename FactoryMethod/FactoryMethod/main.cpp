#include "NYPizzaStore.h"



using namespace std;

int main()
{
	NYPizzaStore ny_pizza_store;

	Pizza* p_pizza = ny_pizza_store.OrderPizza("greek");
	if (p_pizza)
	{
		delete p_pizza;
	}

	return 0;
}