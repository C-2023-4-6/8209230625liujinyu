#include<iostream>
#include"student.h"
int main()
{
	Student stud;
	//Student stud1(007, "tcg", 'm');   Ĭ�ϵĹ��캯�����޲εġ�
	
	stud.set_value(007, "tcg", 'm');
	stud.display();
	return 0;
}