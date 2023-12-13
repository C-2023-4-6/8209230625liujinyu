#include<iostream>
#include<string>
#include<cmath>
using namespace std;
double parseHex(string s1)
{

	double a = 0;
	int len = s1.size();
	for (int i = 0;i < len;i++)
	{
		if (s1[i] >= 'A')
		{
			a += pow(16, len - i - 1) * (s1[i] - 55);
		}
		else
		{
			a += pow(16, len - i - 1) * (s1[i] - '0');
		}
	}
	return a;

}
int main()
{
	string s1;
	getline(cin, s1, '\n');
	cout << parseHex(s1);

	return 0;
}