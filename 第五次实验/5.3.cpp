#include<iostream>
using namespace std;
class cuboid
{
private:
	double height;
	double length;
	double width;
public:
	double cin_num()
	{
		cout << "ÇëÊäÈë³¤ ¿í ¸ß";
		cin >> length;
		cin >> width;
		cin >> height;
	
		int volum;
		volum = length * width * height;
		return volum;
	}
	


};
int main()
{
	cuboid c1;
	cuboid c2;
	cuboid c3;
	cout<<c1.cin_num();
	cout << c2.cin_num();
	cout << c3.cin_num();



}