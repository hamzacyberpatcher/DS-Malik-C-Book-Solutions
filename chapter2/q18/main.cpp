#include <iostream>
using namespace std;

int main()
{
	const double CARTON_CAPACITY = 3.78;
	const double COST_PER_LITER = 0.38;
	const double PROFIT_PER_LITER = 0.27;
	double litres;

	cout << "How many litres of milk has been produced : ";
	cin >> litres;

	double cartons = litres / CARTON_CAPACITY;

	double cost = litres * COST_PER_LITER;

	double profit = litres * PROFIT_PER_LITER;

	cout << "Cartons needed to hold the milk : " << cartons << endl;
	cout << "Cost of producing the milk : " << cost << endl;
	cout << "Porfit : " << profit << endl;

	return 0;
}
