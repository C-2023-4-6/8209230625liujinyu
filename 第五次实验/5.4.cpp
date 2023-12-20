#include<iostream>
using namespace std;
class student
{
public:
	long long no;
	double mark;
public:
	student(long long a, double b)
	{
		no = a;
		mark = b;
	}
};
student s[5] = { student(8209230621,600),student(8209230622,610),student(8209230623,620),student(8209230624,630),student(8209230625,640) };
long long max(student* ss)
 {
	   
	 
	for (int i = 0;i < 4;i++)
	{
		for (int j = i + 1;j < 5;j++)
			if (s[i].mark < s[j].mark)
			{	student t(1, 2);
		s[i].mark = s[j].mark;
		s[j].mark = t.mark;
		t.mark = s[i].mark;
		s[i].no = s[j].no;
		s[j].no= t.no;
		t.no = s[i].no;
		}
	}
	return s[0].no;
		
}
	int main()
	{
		cout<<max(s)<< endl;
	}
	



























































