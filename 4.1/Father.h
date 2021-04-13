#pragma once
#include <iostream>
#include <string>
using namespace std;

class Father
{
private:
	string name;
public:
	Father();
	Father(string n);
	void setN(string n) { name = n; }
	string getN() const { return name; }

	virtual void PrintName();
};
