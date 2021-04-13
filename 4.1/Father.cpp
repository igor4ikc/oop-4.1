#include "Father.h"
Father::Father(string n)
	:name(n)
{}

Father::Father()
	: name(" ")
{}

void Father::PrintName()
{
	cout << "Name : " << getN();
}