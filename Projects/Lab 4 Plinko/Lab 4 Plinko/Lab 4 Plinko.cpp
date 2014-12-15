#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int choice = 0;
	while(choice != 3)
	{
		cout << "Welcome to Plinko!" << endl;
		cout << "Please select desired mode of play..." << endl;
		cout << "Enter 1 to drop a single chip" << endl;
		cout << "Enter 2 to drop multiple chips"<< endl;
		cout << "Enter 3 to quit program" << endl;
		cin >> choice;
		if(choice == 1)
		{
			cout << "Please input desired slot (0 to 8)" << endl;
			double slot = 0;
			cin >> slot;
			if(slot < 0 || slot > 8)
			{
				cout << "Invalid Entry" << endl;
				cout << endl;
				continue;
			}
			else
			{
				//Have chip fall
				for(int i=1; i<=12; i++)
				{
					double x;
					x = rand() % 2;
					x = x - .5;
					if(slot == 0)
					{
						x = .5;
					}
					else if(slot == 8)
					{
						x = -.5;
					}
					slot = slot + x;
					cout << slot << " " ;
				}
				//Report money won
				if(slot == 0 || slot == 8)
				{
					cout << "Congratulations, you won $100!" << endl;
				}
				else if(slot == 1 || slot == 7)
				{
					cout << "Congratulations, you won $500!" << endl;
				}
				else if(slot == 2 || slot == 6)
				{
					cout << "Congratulations, you won $1,000!" << endl;
				}
				else if(slot == 3 || slot == 5)
				{
					cout << "Sorry, you did not win a prize this time" << endl;
				}
				else
				{
					cout << "Amazing! You won $10,000!!" << endl;
				}
				cout << endl;
				continue;
			}
		}
		else if(choice == 2)
		{
			cout << "Please input desired number of chips to drop" << endl;
			int chips = 0;
			cin >> chips;
			if(chips < 0)
			{
				cout << "Invalid Entry" << endl;
				cout << endl;
				continue;
			}
			else
			{
				cout << "Please input desired slot (0 to 8)" << endl;
				double slot = 0;
				cin >> slot;
				int start = slot;
				if(slot < 0 || slot > 8)
				{
					cout << "Invalid Entry" << endl;
					cout << endl;
					continue;
				}
				else
				{
					//Have chips fall
					int total = 0;
					int prize = 0;
					double x;
					for(int c = 1; c <= chips; c++)
					{
						slot = start;
						for(int i=1; i<=12; i++)
						{
							x = rand() % 2;
							x = x - .5;
							if(slot == 0)
							{
								x = .5;
							}
							else if(slot == 8)
							{
								x = -.5;
							}

							slot = slot + x;
						}
						if(slot == 0 || slot == 8)
						{
							prize = 100;
						}
						else if(slot == 1 || slot == 7)
						{
							prize = 500;
						}
						else if(slot == 2 || slot == 6)
						{
							prize = 1000;
						}
						else if(slot == 3 || slot == 5)
						{
							prize = 0;
						}
						else
						{
							prize = 10000;
						}



						total += prize;
					}
					double average = (total / chips);
					//Report final winnings
						cout << "Total winnings: $" << total << endl;
					//Report average winning per chip
						cout << "Average winning per chip: $" << average << endl;
					cout << endl;
					continue;
					
				}
			}
		}
		else if(choice > 3 || choice < 3)
		{
			cout << "Invalid Entry" << endl;
			cout << endl;
			continue;
		}
	}	
	system("pause");
	return 0;
}