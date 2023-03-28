#include "MileageCalculator.h"
#include <cmath>

double MileageCalculator(int totalMiles, int mpg, double fuelCost)
{
	double ans = totalMiles / mpg * 4.54609 * fuelCost / 100;
	double ansRounded = round(ans * 100) / 100;
	cout << "Fuel Cost: £ " << ans << endl;

	return 0.0;
}