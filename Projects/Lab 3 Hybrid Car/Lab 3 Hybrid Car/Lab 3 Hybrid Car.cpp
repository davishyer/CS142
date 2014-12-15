#include<iostream>;
#include<string>;
#include<iomanip>;
using namespace std;

int main()
{
	//Entering miles driven per year
	cout << "Please input estimated miles driven per year" << endl;
	int miles_per_year = 0;
	cin >> miles_per_year;
	while(miles_per_year < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> miles_per_year;
	}

	//Entering price of gas per gallon
	cout << "Please input the estimated price of gas per gallon" << endl;
	double gas_per_gallon = 0;
	cin >> gas_per_gallon;
	while(gas_per_gallon < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> gas_per_gallon;
	}

	//Entering cost of Hybrid car
	cout << "Please input cost of desired Hybrid car" << endl;
	int hybrid = 0;
	cin >> hybrid;
	while(hybrid < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> hybrid;
	}

	//Entering fuel efficiency of Hybrid car
	cout << "Please input fuel efficiency of Hybrid car in miles per gallon" << endl;
	double efficiency_hybrid = 0;
	cin >> efficiency_hybrid;
	while(efficiency_hybrid < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> efficiency_hybrid;
	}

	//Entering resale value of Hybrid car
	cout << "Please input estimated resale value of Hybrid after 5 years" << endl;
	int resale_hybrid = 0;
	cin >> resale_hybrid;
	while(resale_hybrid < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> resale_hybrid;
	}

	//Entering cost of non-Hybrid car
	cout << "Please input cost of desired non-Hybrid car" << endl;
	int car = 0;
	cin >> car;
	while(car < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> car;
	}

	//Entering fuel efficiency of non-Hybrid car
	cout << "Please input fuel efficiency of non-Hybrid car in miles per gallon" << endl;
	double efficiency_car = 0;
	cin >> efficiency_car;
	while(efficiency_car < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> efficiency_car;
	}

	//Entering resale value of non-Hybrid car
	cout << "Please input estimated resale value of non-Hybrid after 5 years" << endl;
	int resale_car = 0;
	cin >> resale_car;
	while(resale_car < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> resale_car;
	}

	//Prompting user for preference
	cout << "Please choose preference: input GAS for gas costs or TOTAL for total cost for car" << endl;
	string pref;
	cin >> pref;
	double gas_hybrid = 0;
	gas_hybrid = ((miles_per_year / efficiency_hybrid) * 5);
	double gas_car = 0;
	gas_car = ((miles_per_year / efficiency_car) * 5);
	double total_hybrid = 0;
	total_hybrid = ((hybrid - resale_hybrid) + (gas_per_gallon * gas_hybrid));
	double total_car = 0;
	total_car = ((car - resale_car) + (gas_per_gallon * gas_car));
	if(pref == "GAS")
	{
		if(gas_hybrid < gas_car)
		{
			cout << "Gas consumption of Hybrid for 5 years is: " << fixed << setprecision(2) << gas_hybrid << endl;
			cout << "Total price for Hybrid car is: $" << fixed << setprecision(2) << total_hybrid << endl;
			cout << "Gas consumption of non-Hybird for 5 years is: " << fixed << setprecision(2) << gas_car << endl;
			cout << "Total price for non-Hybrid car is: $" << fixed << setprecision(2) << total_car << endl;
		}
		else
		{
			cout << "Gas consumption of non-Hybrid for 5 years is: " << fixed << setprecision(2) << gas_car << endl;
			cout << "Total price for non-Hybrid car is: $" << fixed << setprecision(2) << total_car << endl;
			cout << "Gas consumption of Hybrid for 5 years is: " << fixed << setprecision(2) << gas_hybrid << endl;
			cout << "Total price for Hybrid car is: $" << fixed << setprecision(2) << total_hybrid << endl;
		}
	}
	else
	{
		if(total_hybrid < total_car)
		{
			cout << "Total price for Hybrid car is: $" << fixed << setprecision(2) << total_hybrid << endl;
			cout << "Gas consumption of Hybrid for 5 years is: " << fixed << setprecision(2) << gas_hybrid << endl;
			cout << "Total price for non-Hybrid car is: $" << fixed << setprecision(2) << total_car << endl;
			cout << "Gas consumption of non-Hybrid for 5 years is: " << fixed << setprecision(2) << gas_car << endl;
		}
		else
		{
			cout << "Total price for non-Hybrid car is: $" << fixed << setprecision(2) << total_car << endl;
			cout << "Gas consumption of non-Hybrid for 5 years is: " << fixed << setprecision(2) << gas_car << endl;
			cout << "Total price for Hybrid car is: $" << fixed << setprecision(2) << total_hybrid << endl;
			cout << "Gas consumption of Hybrid for 5 years is: " << fixed << setprecision(2) << gas_hybrid << endl;
		}
	}


	system("pause");
	return 0;
}