#include "MileageCalculator.h"
#include <cmath>

/*
* Mileage Calculator
*
* @param totalMiles - Take the totl miles travelled as integer
* @param mpg - Takes Miles Per Gallon as integer
* @param fuelCost - Takes the cost of fuel per litre as double
*
* @return ans - The total cost of fuel for the given values
*/
double MileageCalculator(int totalMiles, int mpg, double fuelCost)
{
	double ans = totalMiles / mpg * 4.54609 * fuelCost / 100;
	double ansRounded = round(ans * 100) / 100;
	cout << "Fuel Cost: £ " << ans << endl;

	return ans;
}