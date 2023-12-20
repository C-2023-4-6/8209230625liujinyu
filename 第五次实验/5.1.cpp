#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员改为私有的
	int hour;
	int minute;
	int sec;
public:
	int geth()  //调用私有数据函数成员
	{
		return hour;
	}
	int getm()
	{
		return minute;
	}
	int gets()
	{
		return sec;
	}
	
	void settime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
};

int main()
{
	Time tl;
	int h;
	int m;
	int s;
	cin >> h;
	cin >> m;
	cin >> s;
	tl.settime(h, m, s);
	
	cout << tl.geth() << ":" << tl.getm() << ":" << tl.gets() << endl;
}


     





























