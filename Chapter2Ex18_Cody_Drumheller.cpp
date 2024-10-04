/*
Title: Chapter 2 Exercise 18 Energy Drink Consumption
File Name: Chapter2Ex18_Cody_Drumheller
Programmer: Cody Drumheller
Date: 20241004
Requirements:Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so 

that the user can enter the number of the number of customers that were surveyed 

*/

#include <iostream>
using namespace std;
int main()
{
    const int total_customers = 16500;
    const double energy_drink_purchasers_percent = 0.15;
	const double citrus_preference_percent = 0.58;
	int energy_drink_customers = total_customers * energy_drink_purchasers_percent;
	int citrus_customers = energy_drink_customers * citrus_preference_percent;
	cout << "Approximate number of customers who purchase one or more energy drinks per week: " << energy_drink_customers << endl;
	cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrus_customers << endl;
	return 0;

}

