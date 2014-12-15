#include <iostream>
#include <string>
#include <time.h>

using namespace std;

//Printing the list of restaurants
void print_rest(int size, string restaurants[])
{
	for(int i = 0; i < size - 1; i ++)
			{
				cout << restaurants[i] << ", ";
			}
			cout << restaurants[size - 1];
			cout << endl;
			cout << endl;
}

//Checking in order to add/remove a restaurant
int check(string restaurants[], int size, string search)
{
	for(int i = 0; i < size; i++)
		{
			if(restaurants[i] == search)
			{
				return i;
			}
		}
	return -1;
}

//Adding the restaurant if allowed
int add_rest(string restaurants[], int size, string add)
{
	int outcome = check(restaurants, size, add);
	if(outcome != -1)
	{
		cout << endl;
		cout << "Restaurant already in the list" << endl;
		cout << "The restaurant was not added to the list" << endl;
		cout << endl;
	}
	else
	{
		restaurants[size] = add;
		size++;
		cout << endl;
		cout << add << " was added to the list" << endl;
		cout << endl;
	}
	return size;
}

//Removing the restaurant if allowed
int rem_rest(string restaurants[], int size, string rem)
{
	int position = check(restaurants, size, rem);
	if(position != -1)
	{
		for(int i = position + 1; i < size; i++)
		{
			restaurants[i-1] = restaurants[i];
		}
		size--;
		cout << endl;
		cout << rem << " was removed from the list" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Restaurant not currently on the list" << endl;
		cout << rem << " was not removed from the list" << endl;
		cout << endl;
	}
	return size;
}

//Shuffling the array
void shuff(string restaurants[], int size)
{
	for(int i = 0; i < 100; i++)
	{
		int rand1 = rand() % size;
		int rand2 = rand() % size;
		string temp = restaurants[rand1];
		restaurants[rand1] = restaurants[rand2];
		restaurants[rand2] = temp;
	}
}

int main()
{
	srand(time(0));
	int size = 16;
	int choice = 0;
		string restaurants[32] = { "Burger King", "McDonalds", "Wendy's", "Arby's", "Carl's Jr", "Dairy Queen", "Pizza Hut", "Cafe Rio", "Domino's", "Papa John's", "Taco Bell", "Del Taco", "Taco Time", "Kneaders", "Paradise", "Costa Vida" };
	
	while(choice !=6)
	{
		cout << "Would you like to..." << endl;
		cout << "1. Display all restaurants" << endl;
		cout << "2. Add a restaurant" << endl;
		cout << "3. Remove a restaurant" << endl;
		cout << "4. Shuffle the array" << endl;
		cout << "5. Begin the tournament" << endl;
		cout << "6. Quit Program" << endl;
		cout << "Please enter the number corresponding to your choice: ";
		cin >> choice;
		if(choice == 1)
		{
			print_rest(size, restaurants);
		}
	
		else if(choice == 2)
		{
			cout << "Please enter the name of the restaurant you wish to add: ";
			string add;
			cin.get();
			getline(cin , add);
			size = add_rest(restaurants, size, add);
		}

		else if(choice == 3)
		{
			cout << "Please enter the name of the restaurant you wish to remove: ";
			string rem;
			cin.get();
			getline(cin ,rem);
			size = rem_rest(restaurants, size, rem);
		}

		else if(choice == 4)
		{
			shuff(restaurants, size);
			cout << endl;
			cout << "The array of restaurants was shuffled" << endl;
			cout << endl;
		}

		else if(choice == 5)
		{
			
		}

		else if(choice == 6)
		{
			cout << "Good Bye" << endl;
		}

		else
		{
			cout << "Invalid Entry" << endl;
			cout << endl;
			cout << endl;
			continue;
		}
	}
	system("pause");
	return (0);
}