#include<iostream>
#include"student.h"
int main()
{
	Student stud;
	//Student stud1(007, "tcg", 'm');   默认的构造函数是无参的。
	
	stud.set_value(007, "tcg", 'm');
	stud.display();
	return 0;
}