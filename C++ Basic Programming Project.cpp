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

	return 0;
}

