#include <iostream>
#include "MileageCalculator.h"

using namespace std;

int main()
{
    int choice = 0;
    string start, destination;
    double totalMiles, mpg, fuelCost, ans;
    bool quit = false;

    do 
    {
        cout << "1) Mileage Calculator" << endl;
        cout << "2) Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Starting (Location/City):" << endl;
            cin >> start;
            cout << "Destination (Location/City):" << endl;
            cin >> destination;
            cout << "Enter the total amount of miles coevered: " << endl;
            cin >> totalMiles;
            cout << "Enter your miles per gallon (MPG): " << endl;
            cin >> mpg;
            cout << "Enter fuel cost (Decimal): " << endl;
            cin >> fuelCost;
            cout << start << " to " << destination << endl;
            ans = MileageCalculator(totalMiles, mpg, fuelCost);
            break;

        case 2:
            quit = true;
        }

    } while (!quit);


    return 0;
}