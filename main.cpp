// This program calculates the population size based on births and deaths at the end of a given year.
// This program then displays the new population size to the user after one year has passed.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



void population(double initialPopulation, double birthrate, double deathrate) {
	for (int year = 1; year++;) // Loop to calculate population for each year
	{
		double newPopulation = initialPopulation * (1 + birthrate) * (1 - deathrate);
		cout << "Year " << year << ": Population size is " << newPopulation << endl;
		initialPopulation = newPopulation; // Update initial population for next iteration
	}


}

int main()	

{
	
	// Declare variables for initial population, number of births, and number of deaths
	double initialPopulation, newPopulation, birthrate, deathrate;
	
	// Prompt user for input
	cout << "Enter the initial population: ";
	cin >> initialPopulation;
	cout << "Enter the annual birth rate (as a decimal): ";
	cin >> birthrate;
	cout << "Enter the annual death rate (as a decimal): ";
	cin >> deathrate;
	

	// Calculate the new population size
	newPopulation = initialPopulation * (1 + birthrate) *(1 - deathrate);
	
	// Display the result
	cout << "The population size at the end of the year is: " << newPopulation << endl;
	return 0;

}