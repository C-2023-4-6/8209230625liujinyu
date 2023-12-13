
#include<iostream>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	//cin >> side1 >> side2 >> side3;
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
	{

		return 0;
	}
	else
		return 1;
	return 1;
}





double _area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	if (is_valid(side1, side2, side3) == 0)
		cout << "invalid" << endl;

	else
		cout << sqrt(s * (s - side1) * (s - side2) * (s - side3)) << endl;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}



