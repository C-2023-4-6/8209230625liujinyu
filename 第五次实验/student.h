#pragma once
class Student
{
public:
	void display();
	
	void set_value(int h,const char name1[], char s)
	{
		num = h;
		strcpy_s(name, name1);
		sex = s;
	}
	
private:
	int num;
	char name[20];
	char sex;
};
