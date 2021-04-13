#include "Child.h"
Child::Child(string n, string f)
	:Father(n)
{
	f_name = f;
}

void Child::PrintName()
{
	cout << "Father : " << getN() << " Child :" << f_name << endl;
}