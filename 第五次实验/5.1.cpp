#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;
public:
	int geth()  //����˽�����ݺ�����Ա
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


     





























