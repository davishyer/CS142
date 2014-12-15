#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string choice = "y";
	while(choice == "y")
	{
		//Entering length of plot
		cout << "Please enter the length of the garden plot: ";
		int l_plot = 0;
		cin >> l_plot;
		//Error for negative
		if(l_plot < 0)
		{
			cout << "Invalid Entry" << endl;
			continue;
		}

		//Entering width of plot
		cout << "Please enter the width of the garden plot: ";
		int w_plot = 0;
		cin >> w_plot;
		//Error for negative
		if(w_plot < 0)
		{
			cout << "Invalid Entry" << endl;
			continue;
		}

		//Checking if size is appropriate
		if(l_plot < 10 && w_plot <10)
		{	cout << "Garden is too small for low tunnels" << endl;	}

		//Length is smaller than width
		if(l_plot <= w_plot)
		{
			int num_three = (l_plot / 3);
			int num_four = (l_plot / 4);
			int num_five = (l_plot / 5);
			int num_ten = (w_plot / 10);
			double area_plot = (l_plot * w_plot);
			double per_three = ((30 * (num_three * num_ten)) / (area_plot));
			double per_four = ((40 * (num_four * num_ten)) / (area_plot));
			double per_five = ((50 * (num_five * num_ten)) / (area_plot));

			//Three by ten is best fit
			if(per_three > per_four && per_three > per_five)
			{
				cout << "You should make " << (num_three * num_ten) << " low tunnel(s), 3' X 10' and place them parallel to the " << w_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_three * 100) << "% (" << (30 * (num_three * num_ten)) << " square feet)." << endl;
				cout << endl;
			}

			//Four by ten is best fit
			else if(per_four >= per_three && per_four > per_five)
			{
				cout << "You should make " << (num_four * num_ten) << " low tunnel(s), 4' X 10' and place them parallel to the " << w_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_four * 100) << "% (" << (40 * (num_four * num_ten)) << " square feet)." << endl;
				cout << endl;
			}

			//Five by ten is best fit
			else if(per_five >= per_four && per_five > per_three)
			{
				cout << "You should make " << (num_five * num_ten) << " low tunnel(s), 5' X 10' and place them parallel to the " << w_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_five * 100) << "% (" << (50 * (num_five * num_ten)) << " square feet)." << endl;
				cout << endl;
			}

		}

		//Length is larger than width
		else if(l_plot > w_plot)
		{
			int num_three = (w_plot / 3);
			int num_four = (w_plot / 4);
			int num_five = (w_plot / 5);
			int num_ten = (l_plot / 10);
			double area_plot = (l_plot * w_plot);
			double per_three = ((30 * (num_three * num_ten)) / (area_plot));
			double per_four = ((40 * (num_four * num_ten)) / (area_plot));
			double per_five = ((50 * (num_five * num_ten)) / (area_plot));

			//Three by ten is best fit
			if(per_three > per_four && per_three > per_five)
			{
				cout << "You should make " << (num_three * num_ten) << " low tunnel(s), 3' X 10' and place them parallel to the " << l_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_three * 100) << "% (" << (30 * (num_three * num_ten)) << " square feet)." << endl;
				cout << endl;
			}

			//Four by ten is best fit
			else if(per_four >= per_three && per_four > per_five)
			{
				cout << "You should make " << (num_four * num_ten) << " low tunnel(s), 4' X 10' and place them parallel to the " << l_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_four * 100) << "% (" << (40 * (num_four * num_ten)) << " square feet)." << endl;
				cout << endl;
			}

			//Five by ten is best fit
			else if(per_five >= per_four && per_five > per_three)
			{
				cout << "You should make " << (num_five * num_ten) << " low tunnel(s), 5' X 10' and place them parallel to the " << l_plot << "' direction." << endl;
				cout << "Your coverage will be " << fixed << setprecision(0) << (per_five * 100) << "% (" << (50 * (num_five * num_ten)) << " square feet)." << endl;
				cout << endl;
			}
		}

		//Prompting for another plot
		cout << "Do you wish to enter another garden plot? (y or n): ";
		cin >> choice;
		cout << endl;
		while(choice != "y" && choice != "n")
		{
			cout << "Invalid Entry" << endl;
			cout << "Do you wish to enter another garden plot? (y or n): ";
			cin >> choice;
			cout << endl;
		}
	}

	cout << "Good Bye" << endl;
	system("pause");
	return 0;
}