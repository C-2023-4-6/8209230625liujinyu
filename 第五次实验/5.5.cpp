#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;

	}

	int show_x()
	{
		return x;
	}
	int show_y()
	{
		return y;
	}
};
int main()
{
	int i;
	int j;
	Point point1(60,80);
	cout << "(" << point1.show_x() << "," << point1.show_y() << ")" << endl;
	cin >> i;
	cin >> j;
	point1.setPoint(i,j);
		
	point1.display();

}