// C++ Basic Programming Project.cpp : This project covers examples Distance per Tank of Gas and
// Energy Drink Consumption.

// Energy Drink Consumption programming example.
#include <iostream>
using namespace std;

int main()
{
	// Declaring and initializing variables.
	int customers = 16500;
	// Percentage of customers purchasing energy drinks 15% = 0.15
	double energyDrinkCustomersPercentage = 0.15;
	// percentage of energy drink customers preferring citrus flavor 58% = 0.58
	double citrusDrinkCustomersPercentage = 0.58;

	// Calculating the approximate number of customers in the survey purchasing one or more energy drinks per week.
	int energyDrinkCustomers = customers * energyDrinkCustomersPercentage;
	// Calculating the approximate number of customers in the survey preferring citrus-flavored energy drinks.
	int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkCustomersPercentage;

	// Displaying the result
	cout << "The approximate number of customers in the survey purchasing one or more energy drinks per week are: "
		<< energyDrinkCustomers << endl;
	cout << "The approximate number of customers in the survey preferring citrus-flavored energy drinks are: "
		<< citrusDrinkCustomers << endl;


// Distance per Tank of Gas programming example.
#include <iostream>
using namespace std;

// Initializing constant variables
const double TANK_SIZE = 20.0; // gallons
const double MILES_PER_GALLON_TOWN = 23.5; // miles per gallon in town
const double MILES_PER_GALLON_HIGHWAY = 28.9; // miles per gallon on highway

int main()
{
	// calculating distances for town and highway
	double distanceTown = TANK_SIZE * MILES_PER_GALLON_TOWN;
	double distanceHighway = TANK_SIZE * MILES_PER_GALLON_HIGHWAY;
	
	// Displaying results.
	cout << "The car can travel " << distanceTown << " miles on a tank of gas in town." << endl;
	cout << "The car can travel " << distanceHighway << " miles on a tank of gas on the highway." << endl;
	return 0;
}

