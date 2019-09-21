#include "MallardDuck.h"
#include "ReadheadDuck.h"
#include "RubberDuck.h"
#include<vector>

using namespace std;

int main()
{
	vector<Duck *> ducks;
	ducks.push_back(new MallardDuck());
	ducks.push_back(new ReadheadDuck());
	ducks.push_back(new RubberDuck());

	for (vector<Duck *>::iterator iter = ducks.begin(); iter != ducks.end(); ++iter)
	{
		(*iter)->display();
		(*iter)->quack();
		(*iter)->swim();
		(*iter)->fly();
	}

	return 0;
}