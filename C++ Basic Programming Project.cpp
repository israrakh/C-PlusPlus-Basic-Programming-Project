// C++ Basic Programming Project.cpp : This project covers examples Distance per Tank of Gas and
// Energy Drink Consumption.


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

