#include<iostream>
#include "HouseBlend.h"
#include"Mocha.h"

using namespace std;

int main()
{
	HouseBlend house_blend;
	cout << house_blend.getDescription() << endl;

	Mocha mocha_house_blend(&house_blend);
	cout << mocha_house_blend.getDescription() << " : " << mocha_house_blend.cost() << endl;

	Mocha mocha_mocha_house_blend(&mocha_house_blend);
	cout << mocha_mocha_house_blend.getDescription() << " : " << mocha_mocha_house_blend.cost() << endl;

	getchar();
	return 0;
}