#include <iostream>
using namespace std;

int main ()
{
	//Number of each size of pizza calculations
	cout << "Enter the number of guests" << endl;
	double guests = 0;
	cin >> guests;
	while(guests < 0)
	{
		cout << "Invalid Entry" << endl;
		cin >> guests;
	}
	cout << "Number of guests is: " << guests << endl;
	int large_pizzas = guests/7;
	cout << "Number of large pizzas is: " << large_pizzas << endl;
	int medium_pizzas = (guests - (7 * large_pizzas))/3;
	cout << "Number of medium pizzas is: " << medium_pizzas << endl;
	int small_pizzas = (guests - (7 * large_pizzas) - (3 * medium_pizzas));
	cout << "Number of small pizzas is: " << small_pizzas << endl;
	system("pause");

	//Surface area and serving size calculations
	double pi = 3.14159;
	double total_surface_area = ((large_pizzas * (100 * pi)) + (medium_pizzas * (64 * pi)) + (small_pizzas * (36 * pi)));
	cout << "Total surface area of pizzas is: " << total_surface_area << " square inches" << endl;
	double serving_size = total_surface_area / guests;
	cout << "Serving size per guest is: " << serving_size << " square inches" << endl;
	system("pause");

	//Total cost calculations
	double total_before_tip = ((large_pizzas * 14.68) + (medium_pizzas * 11.48) + (small_pizzas * 7.28));
	cout << "The total cost before the tip is: $" << total_before_tip << endl;
	cout << "Please enter the desired tip percentage as number between 0 and 100" << endl;
	double percent_tip = 0;
	cin >> percent_tip;
	while(percent_tip < 0)
	{
		cout << "Please enter number between 0 and 100" << endl;
		cin >> percent_tip;
	}
	double tip = (total_before_tip * (percent_tip/100));
	int total_cost = (tip + total_before_tip) + .5;
	cout << "The total cost will approximately be: $" << total_cost << endl;

	system("pause");
	return 0;
}